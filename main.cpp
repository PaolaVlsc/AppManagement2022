#include <iostream>
#include <fstream>
#include <string>
#include "Developer.h"
#include "AppData.h"

using namespace std;

// γράφει σε csv αρχείο τα στοιχεία όλων των Developer
void exportToFileDevelopers(const string &, const AppData &);

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void exportToFileDevelopers(const string &fileName, const AppData &appData)
{
    // Δημιουργία stream
    ofstream fileStream;

    // Άνοιγμα αρχείου
    fileStream.open(fileName.c_str());

    // Έλεγχος ενέργειας
    if (fileStream.is_open() == false) {
        throw -1;
    }

    // εκτύπωση ( for -loop )
    for (Developer *each: appData.getDeveloperList()) {
        each->print(fileStream);
    }
    
    fileStream.close();
}

// (ayta sth main)
// γράφει σε κανάλι εξόδου όλα τα χαρακτηριστικά των εφαρμογών ( games & mediaplayer )
// overloading operator <<
// ostream &operator<<(ostream &, const list<Course *> &);