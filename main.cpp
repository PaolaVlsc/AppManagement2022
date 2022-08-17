#include <iostream>
#include <fstream>
#include <string>
#include "Developer.h"
#include "AppData.h"
#include "Game.h"

using namespace std;

// γράφει σε csv αρχείο τα στοιχεία όλων των Developer
void exportToFileDevelopers(const string &, const AppData &);

ostream &operator<<(ostream &, const AppData &);

int main() {

    // δημιουργία λίστων για typeFiles
    list<TypeFile *> typeFileList01;
    typeFileList01.push_back(new TypeFile(".jpeg"));
    typeFileList01.push_back(new TypeFile(".mov"));
    typeFileList01.push_back(new TypeFile(".mp3"));
    typeFileList01.push_back(new TypeFile(".gif"));
    typeFileList01.push_back(new TypeFile(".raw"));


    list<TypeFile *> typeFileList02;
    typeFileList02.push_back(new TypeFile(".jpg"));
    typeFileList02.push_back(new TypeFile(".mp4"));
    typeFileList02.push_back(new TypeFile(".mvm"));
    typeFileList02.push_back(new TypeFile(".c"));
    typeFileList02.push_back(new TypeFile(".java"));

    // Δημιουργία στιγμιότυπων Developers
    Developer *developer01 = new Developer("codeDev01", "devName01", "devEmail01");
    Developer *developer02 = new Developer("codeDev02", "devName02", "devEmail02");
    Developer *developer03 = new Developer("codeDev03", "devName03", "devEmail03");
    Developer *developer04 = new Developer("codeDev04", "devName04", "devEmail04");

    // Δημιουργία στιγμιότυπων Games
    Game *game01 = new Game("codeGame01", "gameTitle01", developer01, "gameCategory01", 1);
    Game *game02 = new Game("codeGame02", "gameTitle02", developer02, "gameCategory02", 1);
    Game *game03 = new Game("codeGame03", "gameTitle03", developer03, "gameCategory03", 1);
    Game *game04 = new Game("codeGame04", "gameTitle04", developer04, "gameCategory04", 1);


    // Δημιουργία στιγμιότυπων media players
    MediaPlayer *mediaPlayer01 = new MediaPlayer("codeMediaPlayer01", "mediaPlayerTitle01", developer01,
                                                 typeFileList01);
    MediaPlayer *mediaPlayer02 = new MediaPlayer("codeMediaPlayer02", "mediaPlayerTitle02", developer01,
                                                 typeFileList02);
    MediaPlayer *mediaPlayer03 = new MediaPlayer("codeMediaPlayer03", "mediaPlayerTitle03", developer02,
                                                 typeFileList01);
    MediaPlayer *mediaPlayer04 = new MediaPlayer("codeMediaPlayer04", "mediaPlayerTitle04", developer02,
                                                 typeFileList01);
    MediaPlayer *mediaPlayer05 = new MediaPlayer("codeMediaPlayer05", "mediaPlayerTitle05", developer03,
                                                 typeFileList02);
    MediaPlayer *mediaPlayer06 = new MediaPlayer("codeMediaPlayer06", "mediaPlayerTitle06", developer04,
                                                 typeFileList02);

    // Δημιουργία AppData
    AppData appData;

    appData.addDev(*developer01);
    appData.addDev(*developer02);
    appData.addDev(*developer03);
    appData.addDev(*developer04);

    appData.addApp(*game01);
    appData.addApp(*game02);
    appData.addApp(*game03);
    appData.addApp(*game04);

    appData.addApp(*mediaPlayer01);
    appData.addApp(*mediaPlayer02);
    appData.addApp(*mediaPlayer03);
    appData.addApp(*mediaPlayer04);
    appData.addApp(*mediaPlayer05);
    appData.addApp(*mediaPlayer06);


    // write to file
    string fileName = "test.txt";
    try {
        exportToFileDevelopers(fileName, appData);
    } catch (int code) {
        if (code == -1) {
            cout << endl << "Σφάλμα κατά το άνοιγμα αρχείου για εγγραφή δεδομένων\n";
            exit(EXIT_FAILURE);
        }
    }
    
    // overload demonstration <<
    cout << appData;

    return 0;
}

void exportToFileDevelopers(const string &fileName, const AppData &appData) {
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

// γράφει σε κανάλι εξόδου όλα τα χαρακτηριστικά των εφαρμογών (games & mediaplayer)
ostream &operator<<(ostream &stream, const AppData &appData) {

    Game *game;
    MediaPlayer *mediaPlayer;

    for (Application *const &each: appData.getApplicationList()) {

        // print professor
        game = dynamic_cast<Game *>(each);
        if (game != nullptr) {
            game->printDetails(stream);
        }

        // print student
        mediaPlayer = dynamic_cast<MediaPlayer *>(each);
        if (mediaPlayer != nullptr) {
            mediaPlayer->printDetails(stream);
        }
    }

    return stream;
}