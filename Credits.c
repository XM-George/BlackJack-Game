//
// Created by George on 25/03/2026.
//

#include <stdbool.h>
#include <stdio.h>

int getStartingCred(char name[])
{
    float cred=0;
    float checkIfInt=0;         //Helps to check if input is int or float
    printf("Hello %s enter the credits you would like to deposit:", name);
    scanf("%f", &cred);

    checkIfInt=cred-(int)cred;      //if input is an int this will equal 0


    //check for invalid amount

    while(cred<1 || checkIfInt>=0.0000000001)
    {
        while(cred<1)
        {
            printf("\n\nInvalid amount. Deposit must be at least 1.\n");
            scanf("%f", &cred);
            checkIfInt=cred-(int)cred;
        }
        while(checkIfInt>=0.0000000001)
        {
            printf("\n\nInvalid amount. Deposit must be a whole number.\n");
            scanf("%f", &cred);
            checkIfInt=cred-(int)cred;
        }
    }
    printf("\n\n%0.0f credits were successfully deposited.\n\n\n", cred);
    return (int)cred;
}

int getRoundCred(char name[], int credTotal)
{
    float cred=0;
    float checkIfInt=0;         //Helps to check if input is int or float
    printf("Hello %s enter the credits you would like to wager this round:", name);
    scanf("%f", &cred);

    checkIfInt=cred-(int)cred;      //if input is an int this will equal 0


    //check for invalid amount

    while(cred<1 || checkIfInt>=0.0000000001 || cred>(float)credTotal)
    {
        while(cred<1)
        {
            printf("\n\nInvalid amount. Deposit must be at least 1.\n");
            printf("Enter the credits you would like to wager this round");
            scanf("%f", &cred);
            checkIfInt=cred-(int)cred;
        }
        while(checkIfInt>=0.0000000001)
        {
            printf("\n\nInvalid amount. Deposit must be a whole number.\n");
            printf("Enter the credits you would like to wager this round");
            scanf("%f", &cred);
            checkIfInt=cred-(int)cred;
        }
        while (cred>(float)credTotal)
        {
            printf("\n\nYou can not wager more credits than you have.\n");
            printf("Enter the credits you would like to wager this round");
            scanf("%f", &cred);
            checkIfInt=cred-(int)cred;
        }
    }
    printf("\n\n%0.0f credits are on the table from %s.\n\n\n", cred, name);
    return (int)cred;
}

//PLus or Minus credits from the total, bool is to check if we need to add or subtract. True is to add, False it to subtract

void credFix(int *credTotal, int credits, bool transaction)
{
    if(transaction)
    {
        *credTotal+=credits;
    }
    else
    {
        *credTotal-=credits;
    }
}

void displayCred(int credTotal, char name[])
{
    printf("\n%s after this round you have %d credits left\n", name, credTotal);
}