#pragma once

// import:
#include <iostream>
#include <string>


namespace ariel{
    class Player{
    public:
        // constructor:
        Player(std::string);

        // public functions:
        int stacksize();
        int cardesTaken();
        // ~Player();
        
    private:
        std::string name;
        int stack_size;
        int cardes_Taken;
    };
}