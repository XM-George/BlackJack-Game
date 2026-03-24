//
// Created by George on 25/03/2026.
//

#include <stdbool.h>
#include <stdio.h>

#include "GetRoyalCard.h"
#include "GetSymbol.h"
#include "RNG.h"
#include "SymbEnum_StrCrds.h"

int DealD(char name[], int sum, Card S[], int *cards, int *Ace, bool *isEleven)
{
    int num=0, symbol=0;
    printf("%s got ",name);

    num=RNGcard();    //rng card
    symbol=RNGsymbol();     //rng symbol

    S[*cards].num=num;
    S[*cards].symbol=symbol;

    if(num==1)          //Checks if Ace
    {
        printf("Ace of ");
        *Ace+=1;        //Help for double sum because of Ace
        sum+=11;         //update sum
        *isEleven=true;
    }
    else if(num<=10)         //number is 1-10 so no king queen or jack
    {
        printf("%d of ",S[*cards].num);
        sum+=num;   //update sum
    }
    else                //king queen or jack
    {
        GetRoyalCard(num-10);
        sum+=10;    //update sum
    }
    GetSymbol(symbol);

    *cards+=1;    //update card count

    if(*Ace==2)     //both are Aces so only one counts as 11
    {
        sum=12;
    }

    printf("\nTotal: %d\n",sum);

    return sum;     //return sum
}
