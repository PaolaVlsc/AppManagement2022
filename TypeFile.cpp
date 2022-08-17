//
// Created by Velasco on 8/17/2022.
//

#include "TypeFile.h"

TypeFile::TypeFile(const string &name) {
    this->nameType = name;
}

const string &TypeFile::getNameType() const {
    return nameType;
}

void TypeFile::setNameType(const string &nameType) {
    TypeFile::nameType = nameType;
}

