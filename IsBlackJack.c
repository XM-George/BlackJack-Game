//
// Created by George on 25/03/2026.
//

#include <stdbool.h>

#include "SymbEnum_StrCrds.h"

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
