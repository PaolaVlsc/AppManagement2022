//
// Created by Velasco on 8/17/2022.
//

#include "Application.h"


// constructor
Application::Application(const char *code, const string &title, Developer *developer) : code(code), title(title),
                                                                                        developer(developer) {}

// copy constructor
Application::Application(const Application &) {

}


// destructor

Application::~Application() {

}

// setters
void Application::setCode(const char *code) {
    Application::code = code;
}

void Application::setTitle(const string &title) {
    Application::title = title;
}

void Application::setDeveloper(Developer *developer) {
    Application::developer = developer;
}

// getters
const char *Application::getCode() const {
    return code;
}

const string &Application::getTitle() const {
    return title;
}

Developer *Application::getDeveloper() const {
    return developer;
}
// extra methods
// overloading operator
