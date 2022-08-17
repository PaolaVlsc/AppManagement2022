//
// Created by Velasco on 8/17/2022.
//

#ifndef APPMANAGEMENT2022_DEVELOPER_H
#define APPMANAGEMENT2022_DEVELOPER_H


#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Developer {
private:
    char *code;
    string name;
    string email;
public:
    // constructor
    Developer(const char *, const string &, const string &);

    // copy constructor
    Developer(const Developer &);

    // destructor
    virtual ~Developer();

    // setters
    void setCode(const char *code);

    void setName(const string &name);

    void setEmail(const string &email);

    // getters
    const char *getCode() const;

    const string &getName() const;

    const string &getEmail() const;

    // extra methods
    void print(ostream &);
};


// overloading operator <<

#endif //APPMANAGEMENT2022_DEVELOPER_H
