//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_GETROYALCARD_H
#define BLACKJACK_GETROYALCARD_H

/*
    1 is King
    2 is Queen
    3 is Jack
*/

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
    }
}

#endif //BLACKJACK_GETROYALCARD_H