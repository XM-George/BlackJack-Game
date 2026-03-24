#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Credits.h"
#include "GetRoyalCard.h"
#include "GetSymbol.h"
#include "RNG.h"
#include "SymbEnum_StrCrds.h"
#include "GetName.h"
#include "DealP.h"
#include "DealD.h"
#include "HitORStand.h"
#include "DecreaseAceTo_1.h"
#include "GameOver.h"
#include "Hit.h"
#include "Stand.h"
#include "IsBlackJack.h"
#include "CheckWinner.h"
#include "PlayAgain.h"

//an 21 sto proto deal na stamatei i hit

int main()
{
    bool play=true;

    bool isElevenP=false, isElevenD=false;

    char name[100];     //player name

    getName(name);

    int credTotal=0;      //total credits
    credTotal=getStartingCred(name);

    while(play)
    {
        int credOfRound=0;      //credits that are played each round
        credOfRound=getRoundCred(name, credTotal);

        Card P[14];     //player struct for cards
        Card D[14];     //dealer struct for cards

        for (int i=0;i<14;i++)      //arrays initialize
        {
            P[i].num=0;
            D[i].num=0;
            P[i].symbol=0;
            D[i].symbol=0;
        }


        int num,sumPlayer=0,sumDealer=0;        //users sums
        int cardsP=0,cardsD=0;          //users card count
        int AceP=0, AceD=0;             //users ace count



        srand(time(NULL));



        sumPlayer=DealP(name, sumPlayer, P, &cardsP, &AceP, &isElevenP);       //Player first two cards
        printf("\n");
        sumDealer=DealD("Dealer", sumDealer, D, &cardsD, &AceD, &isElevenD);   //Dealer first card



        char input;     //Help for Stand or Hit
        input=HitORStand(name, sumPlayer);      //Determine Hit or Stand for player



        sumPlayer=WhileHit(input, name, sumPlayer, P, &cardsP, "Dealer", &AceP, &isElevenP);       //While Player chooses Hit (in Hit.h)

        if(sumPlayer!=-1)           //if sum=-1 now player lost because sum got over 21
        {
            sumPlayer=Stand(name, sumPlayer, AceP);     //out of WhileHit so player chose stand



            sumDealer=DealD("Dealer", sumDealer, D, &cardsD, &AceD, &isElevenD);      //Dealer Second Card



            input=HitORStand("Dealer", sumDealer);      //Determine Hit or Stand for Dealer



            sumDealer=WhileHit(input, "Dealer", sumDealer, D, &cardsD, name, &AceD, &isElevenD);       //While Dealer Hit

            if(sumDealer!=-1)       //if sum=-1 now dealer lost because sum got over 21
            {
                sumDealer=Stand("Dealer", sumDealer, AceD);         //out of while so dealer chose stand



                Winner(name, sumPlayer, "Dealer", sumDealer, P, D, &credTotal, credOfRound);       //Determines the winner
            }


        }


        if(sumPlayer==-1)
        {
            credFix(&credTotal, credOfRound, false);
        }
        if(sumDealer==-1)
        {
            credFix(&credTotal, credOfRound, true);
        }

        displayCred(credTotal, name);

        play=PlayAgain();       //determine if player wants to again or not

    }

    return 0;

}
