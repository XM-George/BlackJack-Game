//
// Created by George on 25/03/2026.
//

#include <stdbool.h>
#include <stdio.h>
#include "CheckWinner.h"

#include "Credits.h"
#include "SymbEnum_StrCrds.h"
#include "IsBlackJack.h"

void Winner(char Player[], int sumPlayer, char Dealer[], int sumDealer, Card P[], Card D[], int *credTotal, int credOfRound )
{
    if (sumPlayer>sumDealer)        //Player sum is bigger than Dealer. Player won
    {
        printf("\n%s your total is %d \n%s your total is %d\n",Player,sumPlayer, Dealer, sumDealer);
        printf("Winner is %s\n",Player);
        credFix(credTotal, credOfRound, true);
    }
    else if (sumPlayer==sumDealer)       //Player sum is equal to Dealer.
        {
            bool BlackJackP=false;
            bool BlackJackD=false;


            BlackJackP=IsBlackJack(P);
            BlackJackD=IsBlackJack(D);


            if ( BlackJackP==BlackJackD )       //Both have or do not have a natural BlackJack. It is a tie
            {
                printf("\n%s your total is %d \n%s your total is %d\n",Dealer,sumDealer, Player, sumPlayer);
                printf("It's a tie\n");
            }
            else if( BlackJackP )    //Player has a natural BlackJack. Player won
                {
                    printf("\n%s your total is %d \n%s your total is %d\n",Player, sumPlayer, Dealer, sumDealer);
                    printf("But %s wins as he has a natural BlackJack\n", Player);
                    printf("Winner is %s\n",Player);
                    credFix(credTotal, credOfRound, true);
                }
            else if( BlackJackD )    //Dealer has a natural BlackJack. Dealer won
                {
                    printf("\n%s your total is %d \n%s your total is %d\n",Dealer,sumDealer, Player, sumPlayer);
                    printf("But %s wins as he has a natural BlackJack\n",Dealer);
                    printf("Winner is %s\n",Dealer);
                    credFix(credTotal, credOfRound, false);
                }
        }
    else                            //Dealer sum is bigger than Player. Dealer won
    {
        printf("\n%s your total is %d \n%s your total is %d\n",Dealer,sumDealer, Player, sumPlayer);
        printf("Winner is %s\n",Dealer);
        credFix(credTotal, credOfRound, false);
    }
}
