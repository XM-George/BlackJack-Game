//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_CREDITS_H
#define BLACKJACK_CREDITS_H

int getStartingCred(char name[]);

int getRoundCred(char name[], int credTotal);

//PLus or Minus credits from the total, bool is to check if we need to add or subtract. True is to add, False it to subtract

void credFix(int *credTotal, int credits, bool transaction);

void displayCred(int credTotal, char name[]);

#endif //BLACKJACK_CREDITS_H