//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_HIT_H
#define BLACKJACK_HIT_H

int Hit(char name[], int sum, Card S[], int *cards, int *Ace, bool *isEleven);

int WhileHit(char input, char name[], int sum, Card S[], int *cards, char name2[], int *Ace, bool *isEleven);

#endif //BLACKJACK_HIT_H