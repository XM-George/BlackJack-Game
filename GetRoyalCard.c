//
// Created by George on 25/03/2026.
//

/*
    1 is King
    2 is Queen
    3 is Jack
*/

#include <stdio.h>

void GetRoyalCard(int num)
{
    switch (num)
    {
        case 1:
            printf ("King of ");
            break;
        case 2:
            printf("Queen of ");
            break;
        case 3:
            printf("Jack of ");
            break;
        default:
            break;
    }
}
