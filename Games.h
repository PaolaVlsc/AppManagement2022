//
// Created by Velasco on 8/17/2022.
//

#ifndef APPMANAGEMENT2022_GAMES_H
#define APPMANAGEMENT2022_GAMES_H


#include "Application.h"

class Games : public Application {
private:
    string category;
    bool isOnline;
public:
    // constructor
    Games(const char *code, const string &title, Developer *developer, const string &category, bool isOnline);

    // copy constructor
    Games(const Games &);

    // destructor
    ~Games() override;

    // setters
    void setCategory(const string &category);
    void setIsOnline(bool isOnline);

    // getters
    const string &getCategory() const;
    bool getIsOnline() const;

    // extra methods
    // overloading operator
};


#endif //APPMANAGEMENT2022_GAMES_H
