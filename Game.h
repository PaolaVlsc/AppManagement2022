//
// Created by Velasco on 8/17/2022.
//

#ifndef APPMANAGEMENT2022_GAME_H
#define APPMANAGEMENT2022_GAME_H


#include "Application.h"

class Game : public Application {
private:
    string category;
    bool isOnline;
public:
    // constructor
    Game(const char *code, const string &title, Developer *developer, const string &category, bool isOnline);

    // copy constructor
    Game(const Game &);

    // destructor
    ~Game() override;

    // setters
    void setCategory(const string &category);
    void setIsOnline(bool isOnline);

    // getters
    const string &getCategory() const;
    bool getIsOnline() const;

    void printDetails() override;

    // extra methods
    // overloading operator
};


#endif //APPMANAGEMENT2022_GAME_H
