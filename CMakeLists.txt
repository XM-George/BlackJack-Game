cmake_minimum_required(VERSION 4.1)
project(BlackJack C)

set(CMAKE_C_STANDARD 11)

add_executable(BlackJack main.c
        CheckWinner.c
        CheckWinner.h
        Credits.c
        Credits.h
        DealD.c
        DealD.h
        DealP.c
        DealP.h
        DecreaseAceTo_1.c
        DecreaseAceTo_1.h
        GameOver.c
        GameOver.h
        GetName.c
        GetName.h
        GetRoyalCard.c
        GetRoyalCard.h
        GetSymbol.c
        GetSymbol.h
        Hit.c
        Hit.h
        HitORStand.c
        HitORStand.h
        IsBlackJack.c
        IsBlackJack.h
        PlayAgain.c
        PlayAgain.h
        RNG.c
        RNG.h
        Stand.c
        Stand.h
        SymbEnum_StrCrds.h)
