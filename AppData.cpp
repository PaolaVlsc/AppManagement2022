//
// Created by Velasco on 8/17/2022.
//

#include "AppData.h"
// constructor
AppData::AppData(const list<Application *> &applicationList, const list<Developer *> &developerList) : applicationList(
        applicationList), developerList(developerList) {}


// copy constructor
AppData::AppData(const AppData &) {

}


// destructor
AppData::~AppData() {

}

// setters

void AppData::setApplicationList(const list<Application *> &applicationList) {
    AppData::applicationList = applicationList;
}

void AppData::setDeveloperList(const list<Developer *> &developerList) {
    AppData::developerList = developerList;
}

// getters
const list<Application *> &AppData::getApplicationList() const {
    return applicationList;
}

const list<Developer *> &AppData::getDeveloperList() const {
    return developerList;
}

// extra methods
// overloading operator
