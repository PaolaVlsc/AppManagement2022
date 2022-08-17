//
// Created by Velasco on 8/17/2022.
//

#include "Game.h"

// constructor

Game::Game(const char *code, const string &title, Developer *developer, const string &category, bool isOnline)
        : Application(code, title, developer), category(category), isOnline(isOnline) {}

// copy constructor


Game::Game(const Game &copy) : Application(copy) {
    this->category = copy.category;
    this->isOnline = copy.isOnline;

}

// destructor

Game::~Game() {

}

// setters

void Game::setCategory(const string &category) {
    Game::category = category;
}

void Game::setIsOnline(bool isOnline) {
    Game::isOnline = isOnline;
}

// getters
const string &Game::getCategory() const {
    return category;
}

bool Game::getIsOnline() const {
    return isOnline;
}

// extra methods
// overloading operator
