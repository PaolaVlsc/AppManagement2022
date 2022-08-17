//
// Created by Velasco on 8/17/2022.
//

#include "Developer.h"

// constructor
Developer::Developer(const char *code, const string &name, const string &email) : name(name),
                                                                                  email(email) {
    // management of const char *code attribute:


}

// copy constructor
Developer::Developer(const Developer &) {

}


// destructor
Developer::~Developer() {

}

// setters
void Developer::setCode(const char *code) {
    Developer::code = code;
}

void Developer::setName(const string &name) {
    Developer::name = name;
}

void Developer::setEmail(const string &email) {
    Developer::email = email;
}

// getters
const char *Developer::getCode() const {
    return code;
}

const string &Developer::getName() const {
    return name;
}

const string &Developer::getEmail() const {
    return email;
}


// extra methods


// overloading