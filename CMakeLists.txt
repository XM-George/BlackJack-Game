cmake_minimum_required(VERSION 4.1)
project(BlackJack C)

set(CMAKE_C_STANDARD 11)

add_executable(BlackJack main.c
        CheckWinner.h
        Credits.h
        DealD.h
        DealP.h
        DecreaseAceTo_1.h
        GameOver.h
        GetName.h
        GetRoyalCard.h
        GetSymbol.h
        Hit.h
        HitORStand.h
        IsBlackJack.h
        PlayAgain.h
        RNG.h
        Stand.h
        SymbEnum_StrCrds.h)
