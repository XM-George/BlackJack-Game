//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_GETNAME_H
#define BLACKJACK_GETNAME_H

void getName(char name[])
{
    printf("What is your name?");
    scanf(" ");
    scanf("%s",name);       //read name
    printf("\n");
}

#endif //BLACKJACK_GETNAME_H