//
// Created by Velasco on 8/17/2022.
//

#include "MediaPlayer.h"


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
           "\tTitle: " << getTitle() <<
           "\tDeveloper details: " << std::endl <<
           "Code: " << getDeveloper()->getCode() <<
           "\tName: " << getDeveloper()->getName() <<
           "\tEmail: " << getDeveloper()->getEmail() <<
           "\tSupported File Types: " << this->typeFileList << std::endl;
}

// έλεγχος αν υποστηρίζει το συγκεκριμένο μορφότυπο
bool MediaPlayer::hasTypeFile(TypeFile &) {
    return false;
}


// overloading operator
ostream &operator<<(ostream &stream, const list<TypeFile *> &typeFile) {
    for (TypeFile *each: typeFile) {
        stream << "Name: " << each->getNameType() << std::endl;
    }
    return stream;
}
