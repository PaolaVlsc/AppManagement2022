//
// Created by Velasco on 8/17/2022.
//

#include "MediaPlayer.h"

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

// extra methods
void MediaPlayer::printDetails() {

}
// overloading operator