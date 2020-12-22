//
// Created by jorick on 15/12/2020.
//

#ifndef SET_TOP_BOX_MULTIMEDIA_JORICK_FILM_H
#define SET_TOP_BOX_MULTIMEDIA_JORICK_FILM_H
#include "Video.h"
#include <string>
#include <iostream>

class Film : public Video{
private:
    int * chapters{};
    int nbChapters{};

public:
    Film(string name, string pathname, int duration, int * chapters, int nbChapters);
    Film();

    void setChapters(int * _chapters, int _nbChapters);

    int * getChapters() const;
    int getNbChapters() const;

    void display(std::ostream &s) const override {
        s << this->getChapters() << std::endl;
    }
};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_FILM_H
