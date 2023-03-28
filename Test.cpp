// import:
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
using namespace ariel;

#include <stdexcept>
#include <string>
#include <sstream>
#include <vector>


/**
 * @about: Test file for the Game that will be in part B
 * I make more than 20 tests that check the game correctness & reliability.
 * There are 3 main different TEST_CASEs that cover the game
 * 
 * @author Itamar Kuznitsov
 * @since 2023  
*/


TEST_CASE("Game initialization test") {
    // Create two players with their names 
    Player p1("Alice");
    Player p2("Bob");
    
    // create game
    Game game(p1,p2); 

    // should be 26 cards and none taken an first
    CHECK(p1.stacksize() == 26);
    CHECK(p2.cardesTaken() == 0);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);

    SUBCASE("check for init throw exeptions"){
        // check for throw exeptions couse by invalid arguments
        CHECK_THROWS_AS(Player p(""), std::invalid_argument);   //invalid player name
        CHECK_THROWS_AS(Game g(p1,p1), std::invalid_argument);  // invalid game
        CHECK_THROWS_AS(Game g(p1,Player("")), std::invalid_argument);  //invalid players
    }
}


TEST_CASE("Full game test") {
    // Create two players with their names 
    Player p1("Alice");
    Player p2("Bob");
    
    // create game
    Game game(p1,p2); 

    // playes the game untill end
    game.playAll(); 

    // one player won so his stacksize should be empty
    CHECK((p1.stacksize() == 0 || p2.stacksize() == 0));
    CHECK((p1.cardesTaken() == 26 || p2.cardesTaken() == 26)); //one of the players got all cards
    // make sure the print functions works correctly 
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
}



TEST_CASE("5 games test") {
    // Create two players with their names 
    Player p1("Alice");
    Player p2("Bob");
    
    // create game
    Game game(p1,p2); 
    // play 5 games and check for cards stack
    for (int i=1;i<=5;i++) {
        game.playTurn();
        CHECK(p1.stacksize() <= 26-i);    //less then 26-i becaouse draw can be
        CHECK(p2.stacksize() <= 26-i);
        CHECK((p1.cardesTaken() >= (i/2) || p2.cardesTaken() >= (i/2)));
    }

    // should be 21 but can be less if a draw was played
    CHECK(p1.stacksize() <= 21);
    CHECK(p2.stacksize() <= 21);    
    // at list one player won 3 cards 
    CHECK((p1.cardesTaken() >= 3|| p2.cardesTaken() >= 3));
    // make sure the print function works correctly 
    CHECK_NOTHROW(game.printLastTurn());
}



