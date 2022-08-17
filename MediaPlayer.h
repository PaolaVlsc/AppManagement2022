//
// Created by Velasco on 8/17/2022.
//

#ifndef APPMANAGEMENT2022_MEDIAPLAYER_H
#define APPMANAGEMENT2022_MEDIAPLAYER_H


#include "Developer.h"
#include "Application.h"
#include "TypeFile.h"

#include <list>

using std::list;

class MediaPlayer : public Application {
private:
    list<TypeFile *> typeFileList;
public:
    // constructor
    MediaPlayer(const char *code, const string &title, Developer *developer, const list<TypeFile *> &typeFileList);
    // copy constructor
    MediaPlayer(const MediaPlayer &);
    // destructor
    ~MediaPlayer() override;
    // setters
    void setTypeFileList(const list<TypeFile *> &typeFileList);
    // getters

    const list<TypeFile *> &getTypeFileList() const;
    // extra methods
    // overloading operator
};


#endif //APPMANAGEMENT2022_MEDIAPLAYER_H
