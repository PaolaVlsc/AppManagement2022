//
// Created by Velasco on 8/17/2022.
//

#include "Games.h"

// constructor

Games::Games(const char *code, const string &title, Developer *developer, const string &category, bool isOnline)
        : Application(code, title, developer), category(category), isOnline(isOnline) {}

// copy constructor


Games::Games(const Games &copy) : Application(copy) {

}

// destructor

Games::~Games() {

}

// setters

void Games::setCategory(const string &category) {
    Games::category = category;
}

void Games::setIsOnline(bool isOnline) {
    Games::isOnline = isOnline;
}

// getters
const string &Games::getCategory() const {
    return category;
}

bool Games::getIsOnline() const {
    return isOnline;
}

// extra methods
// overloading operator
