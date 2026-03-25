//
// Created by George on 25/03/2026.
//

#include <stdlib.h>

int rngCard()
{
    return 1 + rand()%13; // NOLINT(*-msc50-cpp)
}

int rngSymbol()
{
    return 1 + rand()%4; // NOLINT(*-msc50-cpp)
}