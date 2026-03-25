//
// Created by George on 25/03/2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Credits.h"

int getStartingCred(char name[])
{
    int cred=0;

    printf("Hello %s enter the credits you would like to deposit:", name);
    cred = readCred();
    printf("\n\n%d credits were successfully deposited.\n\n\n", cred);
    return cred;
}

int getRoundCred(char name[], int credTotal)
{
    int cred=0;

    printf("Hello %s enter the credits you would like to wager this round:", name);

    cred = readCred();

    //check for invalid amount

    while (cred>credTotal)
    {
        printf("\n\nYou can not wager more credits than you have.\n");
        printf("Enter the credits you would like to wager this round:");
        cred = readCred();
    }

    printf("\n\n%d credits are on the table from %s.\n\n\n", cred, name);
    return cred;
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

int readCred()
{
    char input[100];
    char *end;
    int cred=0;

    scanf(" ");
    do {
        fgets(input, sizeof(input), stdin);

        cred = strtol(input, &end,10);

        if (end == input || (*end != '\n' && *end != '\0') || cred<1) {
            printf("\nAmount must be a whole number and at least 1.\n");
            printf("Please enter a valid amount:");
            continue;
        }

        break;

    }while (1);

    return cred;
}