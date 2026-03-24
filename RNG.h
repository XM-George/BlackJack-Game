//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_RNG_H
#define BLACKJACK_RNG_H

int RNGcard()
{
    return 1 + rand()%13;
}

int RNGsymbol()
{
    return 1 + rand()%4;
}

#endif //BLACKJACK_RNG_H