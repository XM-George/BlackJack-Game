//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_GETSYMBOL_H
#define BLACKJACK_GETSYMBOL_H

/*
    1 is Clubs
    2 is Diamonds
    3 is Hearts
    4 is Spades
*/
void GetSymbol(int symbol)
{
    switch(symbol)
    {
        case 1:
            printf("Clubs");
            break;
        case 2:
            printf("Diamonds");
            break;
        case 3:
            printf("Hearts");
            break;
        case 4:
            printf("Spades");
            break;


    }
}

#endif //BLACKJACK_GETSYMBOL_H