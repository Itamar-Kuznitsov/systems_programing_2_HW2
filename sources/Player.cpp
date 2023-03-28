// imports:
#include "player.hpp"
#include <iostream>
#include <string>
using namespace ariel;

/**
 * @about: Player class for CardWar game
 * @author Itamar Kuznitsov
 * @since  2023  
*/


// constructor:
Player:: Player(std::string name)
    : name(name), stack_size(26), cardes_Taken(0) {}

// public functions:
int Player::stacksize(){
    return stack_size;
}
int Player::cardesTaken(){
    return cardes_Taken;
}

// destructor:
// Player:: ~Player(){}