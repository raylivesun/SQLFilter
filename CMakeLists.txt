cmake_minimum_required(VERSION 3.28)
project(SQLFilter)

set(CMAKE_CXX_STANDARD 17)

add_executable(SQLFilter main.cpp
        P2621R2/Mativation/standard.cpp
        P2621R2/Mativation/standard.h
        P2621R2/Mativation/following.cpp
        P2621R2/Mativation/following.h
        P2621R2/Mativation/expr.cpp
        P2621R2/Mativation/expr.h
        P2621R2/Mativation/intro.cpp
        P2621R2/Mativation/intro.h
        P2621R2/Mativation/access.cpp
        P2621R2/Mativation/access.h
        P2621R2/Mativation/basic.cpp
        P2621R2/Mativation/basic.h
        P2621R2/Mativation/click.cpp
        P2621R2/Mativation/click.h
        P2621R2/Mativation/scope.cpp
        P2621R2/Mativation/scope.h
        P2621R2/Mativation/acool.cpp
        P2621R2/Mativation/acool.h
        P2621R2/Mativation/objects.cpp
        P2621R2/Mativation/objects.h
        P2621R2/Mativation/pub.cpp
        P2621R2/Mativation/pub.h
        P2621R2/Expressions/overcalled.cpp
        P2621R2/Expressions/overcalled.h
        P2621R2/Expressions/effects.cpp
        P2621R2/Expressions/effects.h
        P2621R2/Expressions/match.cpp
        P2621R2/Expressions/match.h
        P2621R2/Expressions/similar.cpp
        P2621R2/Expressions/similar.h
        P2621R2/Expressions/news.cpp
        P2621R2/Expressions/news.h
        P2621R2/Expressions/pointer.cpp
        P2621R2/Expressions/pointer.h
        P2621R2/Expressions/objcout.cpp
        P2621R2/Expressions/objcout.h
        P2621R2/Expressions/lifetimes.cpp
        P2621R2/Expressions/lifetimes.h
        P2621R2/Expressions/occupy.cpp
        P2621R2/Expressions/occupy.h
        P2621R2/Except/vooboq.cpp
        P2621R2/Except/vooboq.h
        P2621R2/Except/voolist.cpp
        P2621R2/Except/voolist.h
)
