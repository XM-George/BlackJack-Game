//
// Created by George on 25/03/2026.
//

#include <stdlib.h>

int RNGcard()
{
    return 1 + rand()%13; // NOLINT(*-msc50-cpp)
}

int RNGsymbol()
{
    return 1 + rand()%4; // NOLINT(*-msc50-cpp)
}