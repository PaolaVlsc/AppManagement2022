//
// Created by Velasco on 8/17/2022.
//

#include "AppData.h"
// constructor
// use default

// copy constructor
// use default

// destructor
// use default

// setters

void AppData::setApplicationList(const list<Application *> &applicationList) {
    this->applicationList = applicationList;
}

void AppData::setDeveloperList(const list<Developer *> &developerList) {
    this->developerList = developerList;
}

// getters
const list<Application *> &AppData::getApplicationList() const {
    return this->applicationList;
}

const list<Developer *> &AppData::getDeveloperList() const {
    return this->developerList;
}

/********* extra methods **********/

// add app on the list
void AppData::addApp(Application &application) {
    list<Application *> temp = this->applicationList;
    temp.push_back(&application);
    this->applicationList = temp;
}

// remove app on the list
void AppData::removeApp(Application &application) {
// FIXME 1: remove ( check if the list has the application or not )
}

// add developer on the list
void AppData::addDev(Developer &developer) {
    list<Developer *> temp = this->developerList;
    temp.push_back(&developer);
    this->developerList = temp;
}

// επιστρέφει τη λίστα των MediaPlayer εφαρμογών που υποστηρίζουν συγκεκριμένο μορφότυπο
list<MediaPlayer *> AppData::supportedTypeFileList(TypeFile &typeFile) {
    list<MediaPlayer *> listOfSupportedTypeFiles;

    // διαχωρισμός των εφαρμογών από τη λίστα applicationList
    MediaPlayer *mediaPlayerApp;
    for (Application *const each: this->applicationList) {
        mediaPlayerApp = dynamic_cast<MediaPlayer *>(each);
        // αν επιτρέπεται η μετατροπή
        if (mediaPlayerApp != nullptr) {
            // χρήση μεθόδου αν υπάρχει το typeFile
            if (mediaPlayerApp->hasTypeFile(typeFile)) {
                // προσθήκη εφαρμογής στη λίστα
                listOfSupportedTypeFiles.push_back(mediaPlayerApp);
            }
        }
    }
    return listOfSupportedTypeFiles;
}


// overloading operator
