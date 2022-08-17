//
// Created by Velasco on 8/17/2022.
//

#include "Application.h"
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

// constructor
Application::Application(const char *code, const string &title, Developer *developer) : title(title),
                                                                                        developer(developer) {
    //code
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
Application::Application(const Application &copy) {
    //code
    try {
        this->code = new char[strlen(copy.code) + 1];
    }
    catch (std::bad_alloc &exception) {
        cout << exception.what() << endl;
        exit(EXIT_FAILURE);
    }

    strncpy(this->code, copy.code, strlen(copy.code) + 1);

    this->title = copy.title;
    this->developer = copy.developer;

}


// destructor

Application::~Application() {

    delete[]this->code;
}

// setters
void Application::setCode(const char *code) {
    delete[] this->code;
    try {
        this->code = new char[strlen(code) + 1];
    }
    catch (std::bad_alloc &exception) {
        cout << exception.what() << endl;
        exit(EXIT_FAILURE);
    }
    strncpy(this->code, code, strlen(code) + 1);
}

void Application::setTitle(const string &title) {
    Application::title = title;
}

void Application::setDeveloper(Developer *developer) {
    Application::developer = developer;
}

// getters
const char *Application::getCode() const {
    return this->code;
}

const string &Application::getTitle() const {
    return this->title;
}

Developer *Application::getDeveloper() const {
    return this->developer;
}

// extra methods
// overloading operator
