//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_PLAYAGAIN_H
#define BLACKJACK_PLAYAGAIN_H

bool PlayAgain()
{
    char input[10];

    printf("\nPlay again?\n");
    printf("\nType Yes to play again or No to exit\n\n");
    scanf("%s",input);

    //while neither yes nor no

    while ( strcmp(input,"No")!=0 && strcmp(input, "Yes")!=0 && strcmp(input,"no")!=0 && strcmp(input, "yes")!=0 &&
            strcmp(input,"NO")!=0 && strcmp(input, "YES")!=0 && strcmp(input,"N")!=0 && strcmp(input, "Y")!=0 && strcmp(input,"n")!=0 && strcmp(input, "y")!=0)
    {
        printf("\nWrong input, try again\n\n");
        scanf("%s",input);
    }

    //check first letter of word for y(yes) or n(no)

    if ( (int)input[0]==89 || (int)input[0]==121 )
    {
        printf("\n\n\n");   //clear the terminal
        return true;
    }

    return false;
}

#endif //BLACKJACK_PLAYAGAIN_H