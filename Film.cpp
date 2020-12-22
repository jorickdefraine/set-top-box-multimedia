//
// Created by jorick on 15/12/2020.
//

#include "Film.h"
#include "Video.h"
#include "SetTopBoxMultimedia.h"

Film::Film(string name, string pathname, int duration, int * _chapters, int _nbChapters) : Video(name, pathname, duration) {
    chapters = _chapters;
    nbChapters = _nbChapters;
}

// Setter
void Film::setChapters(int * _chapters, int _nbChapters) {
    chapters = _chapters;
    nbChapters = _nbChapters;
}

// Getter
int * Film::getChapters() const {
    return chapters;
}

int Film::getNbChapters() const {
    return nbChapters;
}