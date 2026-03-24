//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_GAMEOVER_H
#define BLACKJACK_GAMEOVER_H

bool GameOver(char loser[], int *sum, char winner[], int *Ace, bool *isEleven)
{
    if (*sum>21 && !*isEleven)     //checks for ace because if there is and it counts as 11 we can -10 from sum so player wont lose
    {
        printf("\nGAME OVER\n");
        printf("\nWinner is %s\n",winner);
        printf("\n%s you lost, your total is %d and it is over 21\n",loser, *sum);
        printf("\nTry again next time\n");
        return true;
    }
    else
        if(*sum>21)
        {
            DecreaseAce(&*sum);
            *isEleven=false;
        }
    return false;
}

#endif //BLACKJACK_GAMEOVER_H