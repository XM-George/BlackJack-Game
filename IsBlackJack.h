//
// Created by George on 24/03/2026.
//

#ifndef BLACKJACK_ISBLACKJACK_H
#define BLACKJACK_ISBLACKJACK_H

bool IsBlackJack(Card S[])
{
    if ( S[0].num==1 || S[1].num==1 )
    {
        if( S[0].num>=10 || S[1].num>=10 )
        {
            if(S[2].num==0 && S[2].symbol==0)
            {
                return true;
            }
        }
    }
    return false;
}

#endif //BLACKJACK_ISBLACKJACK_H