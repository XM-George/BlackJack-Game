//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_STAND_H
#define BLACKJACK_STAND_H

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

#endif //BLACKJACK_STAND_H