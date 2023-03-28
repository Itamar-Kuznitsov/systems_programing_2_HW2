#pragma once

// import:
#include <iostream>
#include "player.hpp"

using namespace ariel;

namespace ariel{
    class Game{
    public:
        // constructor:
        Game(const Player&, const Player&);

        // public functions:
        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();

        // destructor:
        // ~Game();

    private:
        const Player& p1;
        const Player& p2;
    };
}
