//
// Created by jorick on 15/12/2020.
//

#include "Film.h"
#include "Video.h"
#include "SetTopBoxMultimedia.h"

Film::Film(string name, string pathname, int duration, int _nbChapters, int *_chapters) : Video(name, pathname, duration) {
    nbChapters = _nbChapters;

    delete []chapters;

    int * chapters = new int[nbChapters];
    for(int i = 0; i < nbChapters; i++) {
        chapters[i] = _chapters[i];
    }
}

// Setter
void Film::setChapters(int _nbChapters, int _chapters[]) {
    nbChapters = _nbChapters;

    delete []chapters;

    int * chapters = new int[nbChapters];

    for(int i = 0; i < nbChapters; i++) {
        chapters[i] = _chapters[i];
    }
}