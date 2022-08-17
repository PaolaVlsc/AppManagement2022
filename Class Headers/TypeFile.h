//
// Created by Velasco on 8/17/2022.
//

#ifndef APPMANAGEMENT2022_TYPEFILE_H
#define APPMANAGEMENT2022_TYPEFILE_H

#include <string>

using std::string;

class TypeFile {
private:
    string nameType;
public:
    // constructor
    TypeFile(const string &);
    // copy constructor
    // destructor

    // setters
    void setNameType(const string &nameType);

    // getters
    const string &getNameType() const;

    // extra methods
    bool operator==(const TypeFile &);
};





#endif //APPMANAGEMENT2022_TYPEFILE_H
