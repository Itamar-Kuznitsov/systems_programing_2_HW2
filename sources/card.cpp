// import:
#include "card.hpp"

/**
 * @about: Card class for CardWar game
 * @author Itamar Kuznitsov
 * @since 2023  
*/


// constructor:
Card::Card(int type)
    : type(type) {}

// public functions:
int Card:: get_card_type(){
    return type;
}

// destructor:
// Card:: ~Card(){}
