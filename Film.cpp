//
// Created by jorick on 15/12/2020.
//

#include "Film.h"
#include "Video.h"
#include "SetTopBoxMultimedia.h"

//Film::Film(string name, string pathname, int duration, int * _firstChapter, int _nbChapters, int _chapters[]) : Video(name, pathname, duration) {
//    firstChapter = _firstChapter;
//    nbChapters = _nbChapters;
//}

Film::Film(string name, string pathname, int duration, int _nbChapters, int _chapters[]) : Video(name, pathname, duration) {
    nbChapters = _nbChapters;
    for(int i = 0; i < nbChapters; ++i) {
        chapters[i] = _chapters[i];
    }
}

// Setter
//void Film::setChapters(int * _firstChapter, int _nbChapters) {
//    firstChapter = _firstChapter;
//    nbChapters = _nbChapters;
//}

// Setter
void Film::setChapters(int _nbChapters, int _chapters[]) {
    nbChapters = _nbChapters;
    for(int i = 0; i < nbChapters; ++i) {
        chapters[i] = _chapters[i];
    }
}