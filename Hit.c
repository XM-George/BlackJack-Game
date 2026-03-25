//
// Created by George on 25/03/2026.
//

#include <stdbool.h>
#include <stdio.h>

#include "DecreaseAceTo_1.h"
#include "GameOver.h"
#include "GetRoyalCard.h"
#include "GetSymbol.h"
#include "HitORStand.h"
#include "RNG.h"
#include "SymbEnum_StrCrds.h"

int Hit(char name[], int sum, Card S[], int *cards, int *Ace, bool *isEleven)
{
    int num=0,symbol=0;

    printf("\n%s you chose Hit and got ",name);

    num = rngCard();        //rng card
    symbol = rngSymbol();   //rng symbol

    S[*cards].num = num;
    S[*cards].symbol = symbol;

    if(num==1)          //Checks if Ace
    {
        printf("Ace of ");
        *Ace+=1;        //Help for double sum because of Ace

        if(*Ace==1 && sum<11)       //checks if it is the first ace and if sum is below the threshold of 11
        {
            sum+=11;        //update sum
            *isEleven=true;
        }
        else
        {
            sum+=1;         //update sum
        }
    }
    else if(num<=10)         //number is 1-10 so no king queen or jack
    {
        printf("%d of ",S[*cards].num);
        sum+=num;       //add to sum
    }
    else                //king queen or jack
    {
        GetRoyalCard(num-10);
        sum+=10;       //add to sum
    }
    GetSymbol(symbol);

    *cards+=1;      //update card count

    if(sum>21 && *isEleven)
    {
        DecreaseAce(&sum);
        *isEleven=false;
    }

    printf("\nTotal: %d",sum);

    return sum;     //return updated sum
}


int WhileHit(char input, char name[], int sum, Card S[], int *cards, char name2[], int *Ace, bool *isEleven)
{
    while ((int)input==72 || (int)input==104)   //While Hit
    {
        sum=Hit(name, sum, S, cards, Ace, isEleven);         //Update Sum
        if( GameOver(name, &sum, name2, Ace, isEleven) )        //Checks if sum is over 21
        {
            return -1;
        }
        if(sum==21)
        {
            printf("\n\n%s your total reached %d\n", name, sum);         //force stops hit sequence if sum reaches 21
            return sum;
        }
        input=HitORStand(name, sum);      //Asks for Hit or Stand each time
    }

    return sum;
}