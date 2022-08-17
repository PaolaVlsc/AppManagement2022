//
// Created by Velasco on 8/17/2022.
//

#ifndef APPMANAGEMENT2022_APPDATA_H
#define APPMANAGEMENT2022_APPDATA_H


#include "Application.h"

#include <list>

using std::list;

class AppData {
private:
    list<Application *> applicationList;
    list<Developer *> developerList;
public:
    // constructor
    AppData(const list<Application *> &applicationList, const list<Developer *> &developerList);
    // copy constructor
    AppData(const AppData &);
    // destructor
    virtual ~AppData();
    // setters
    void setApplicationList(const list<Application *> &applicationList);

    void setDeveloperList(const list<Developer *> &developerList);
    // getters

    const list<Application *> &getApplicationList() const;

    const list<Developer *> &getDeveloperList() const;

// extra methods

// add app on the list

// remove app on the list


// add developer on the list

// επιστρέφει τη λίστα των MediaPlayer εφαρμογών που υποστηρίζουν συγκεκριμένο μορφότυπο


};



#endif //APPMANAGEMENT2022_APPDATA_H
