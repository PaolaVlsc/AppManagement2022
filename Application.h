//
// Created by Velasco on 8/17/2022.
//

#ifndef APPMANAGEMENT2022_APPLICATION_H
#define APPMANAGEMENT2022_APPLICATION_H


#include "Developer.h"
#include <string>

using std::string;

class Application {
private:
    char *code;
    string title;
    Developer *developer;

public:
    // constructor
    Application(const char *, const string &, Developer *);

    // copy constructor
    Application(const Application &);

    // destructor
    virtual ~Application();

    // setters

    void setCode(const char *code);

    void setTitle(const string &title);


    void setDeveloper(Developer *developer);

    // getters
    const char *getCode() const;

    const string &getTitle() const;

    Developer *getDeveloper() const;

    // extra methods

    // pure virtual
    virtual void printDetails() = 0;

    // overloading operator

};


#endif //APPMANAGEMENT2022_APPLICATION_H
