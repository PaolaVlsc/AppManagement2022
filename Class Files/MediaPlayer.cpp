//
// Created by Velasco on 8/17/2022.
//

#include "../Class Headers/MediaPlayer.h"
#include <iostream>

using namespace std;

// overloading operator
ostream &operator<<(ostream &, const list<TypeFile *> &);

// constructor
MediaPlayer::MediaPlayer(const char *code, const string &title, Developer *developer,
                         const list<TypeFile *> &typeFileList) : Application(code, title, developer),
                                                                 typeFileList(typeFileList) {}


// copy constructor
MediaPlayer::MediaPlayer(const MediaPlayer &copy) : Application(copy) {
    this->typeFileList = copy.typeFileList;

}


// destructor

MediaPlayer::~MediaPlayer() {

}

// setters

void MediaPlayer::setTypeFileList(const list<TypeFile *> &typeFileList) {
    MediaPlayer::typeFileList = typeFileList;
}

// getters
const list<TypeFile *> &MediaPlayer::getTypeFileList() const {
    return typeFileList;
}

void MediaPlayer::printDetails(ostream &stream) {
    stream << "Code: " << getCode() <<
           "\tTitle: " << getTitle() << std::endl <<
           "Developer details: " << std::endl <<
           "\tCode: " << getDeveloper()->getCode() <<
           "\tName: " << getDeveloper()->getName() <<
           "\tEmail: " << getDeveloper()->getEmail() << std::endl <<
           "Supported File Types: " << this->typeFileList << std::endl << std::endl;
}

#include <algorithm>

// έλεγχος αν υποστηρίζει το συγκεκριμένο μορφότυπο
bool MediaPlayer::hasTypeFile(TypeFile *typeFile) {
    list<TypeFile *>::iterator it;
    for (it = typeFileList.begin(); it != typeFileList.end(); it++) {
        if (*it == typeFile) {
            cout << "hey";
            return true;
        }
    }
    return false;

// cout << "Im here" << endl;
//    bool flag = find(typeFileList.begin(), typeFileList.end(), &typeFile) != typeFileList.end();
//
//    cout << flag << endl;
//    return flag;
}


// overloading operator
ostream &operator<<(ostream &stream, const list<TypeFile *> &typeFile) {
    for (TypeFile *each: typeFile) {
        stream << "Name: " << each->getNameType() << std::endl;
    }
    return stream;
}
