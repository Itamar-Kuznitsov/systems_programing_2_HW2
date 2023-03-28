// import:
#include "game.hpp"
#include <iostream>
using namespace ariel;

/**
 * @about: Game class for CardWar game
 * @author Itamar Kuznitsov
 * @since  2023  
*/


// constructor:
Game::Game(const Player& player1, const Player& player2)
    : p1(player1), p2(player2) {}
    
// public functions:
void Game:: playTurn(){}
void Game:: printLastTurn(){}
void Game:: playAll(){}
void Game:: printWiner(){}            
void Game:: printLog(){}
void Game:: printStats(){}


// Game::~Game(){}
