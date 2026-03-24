//
// Created by George on 25/03/2026.
//

#include <stdio.h>

int Stand(char name[], int sum, int Ace)
{

    if(sum!=21)
    {
        printf("\n%s you chose Stand\n",name);
    }

    //prints the total after stand

    printf("Final total is %d\n\n",sum);

    return sum;

}
