//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_SYMBENUM_STRCRDS_H
#define BLACKJACK_SYMBENUM_STRCRDS_H

enum Symbols {
    Clubs,
    Diamonds,
    Hearts,
    Spades
};

struct Card{
    int num;
    int symbol;
};

typedef struct Card Card;

#endif //BLACKJACK_SYMBENUM_STRCRDS_H