//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_HITORSTAND_H
#define BLACKJACK_HITORSTAND_H

char HitORStand(char name[], int sum)
{
    char input[100];    //buffer for input
    printf("\n\n%s your total is %d. Hit or Stand?\n\n", name, sum);
    scanf(" ");
    scanf("%s",input);

    //while input is neither hit nor stand read again

    while ( strcmp(input,"Stand")!=0 && strcmp(input, "Hit")!=0 && strcmp(input,"stand")!=0 && strcmp(input, "hit")!=0 &&
            strcmp(input,"STAND")!=0 && strcmp(input, "HIT")!=0 && strcmp(input,"S")!=0 && strcmp(input, "H")!=0 && strcmp(input,"s")!=0 && strcmp(input, "h")!=0)
    {
        printf("\nWrong Input, Try Again\n\n");
        scanf(" ");
        scanf("%s",input);
    }
    return input[0];    //return first character of word. ( S for Stand or H for Hit )
}

#endif //BLACKJACK_HITORSTAND_H