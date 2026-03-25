//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_SYMBOL_ENUM_STRUCT_CARDS_H
#define BLACKJACK_SYMBOL_ENUM_STRUCT_CARDS_H

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

#endif //BLACKJACK_SYMBOL_ENUM_STRUCT_CARDS_H