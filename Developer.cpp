//
// Created by Velasco on 8/17/2022.
//

#include <cstring>
#include "Developer.h"
#include <string>
#include <iostream>

using namespace std;

// constructor
Developer::Developer(const char *code, const string &name, const string &email) : name(name),
                                                                                  email(email) {
    // management of const char *code attribute:
    try {
        this->code = new char[strlen(code) + 1];
    }
    catch (std::bad_alloc &exception) {
        cout << exception.what() << endl;
        exit(EXIT_FAILURE);
    }

    strncpy(this->code, code, strlen(code) + 1);
}

// copy constructor
Developer::Developer(const Developer &copy) {

    // last name and first name
    try {
        this->code = new char[strlen(copy.code) + 1];
    }
    catch (std::bad_alloc &exception) {
        cout << exception.what() << endl;
        exit(EXIT_FAILURE);
    }

    strncpy(this->code, copy.code, strlen(copy.code) + 1);

    this->name = copy.name;
    this->email = copy.email;
}


// destructor
Developer::~Developer() {
    delete[]this->code;
}

// setters
void Developer::setCode(const char *code) {
    delete[] this->code;
    // last name and first name
    try {
        this->code = new char[strlen(code) + 1];
    }
    catch (std::bad_alloc &exception) {
        cout << exception.what() << endl;
        exit(EXIT_FAILURE);
    }
    strncpy(this->code, code, strlen(code) + 1);
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