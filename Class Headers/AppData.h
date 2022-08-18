//
// Created by Velasco on 8/17/2022.
//

#ifndef APPMANAGEMENT2022_APPDATA_H
#define APPMANAGEMENT2022_APPDATA_H


#include "Application.h"
#include "TypeFile.h"
#include "MediaPlayer.h"

#include <list>

using std::list;

class AppData {
private:
    list<Application *> applicationList;
    list<Developer *> developerList;
public:
    // constructor
    // use default

    // copy constructor
    // use default

    // destructor
    // use default

    // setters
    void setApplicationList(const list<Application *> &applicationList);

    void setDeveloperList(const list<Developer *> &developerList);
    // getters

    const list<Application *> &getApplicationList() const;

    const list<Developer *> &getDeveloperList() const;

    /********* extra methods **********/

    // add app on the list
    void addApp(Application &);

    // remove app on the list
    void removeApp(Application *);

    // add developer on the list
    void addDev(Developer &);

    // επιστρέφει τη λίστα των MediaPlayer εφαρμογών που υποστηρίζουν συγκεκριμένο μορφότυπο
    list<MediaPlayer *> supportedTypeFileList(TypeFile *);
};

#endif //APPMANAGEMENT2022_APPDATA_H
