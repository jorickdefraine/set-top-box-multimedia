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
    //int * firstChapter{};
    int nbChapters{};
    int chapters[];

public:
    //Film(string name, string pathname, int duration, int * firstChapter, int nbChapters, int chapters[]);
    Film(string name, string pathname, int duration, int nbChapters, int chapters[]);
    Film();
    ~Film() override{};

    //void setChapters(int * _firstChapter, int _nbChapters);
    void setChapters(int _nbChapters, int _chapters[]);

    //const int * getFirstChapter() const{return firstChapter;};
    const int getChapters() const{return *chapters;};

    const int getNbChapters() const{return nbChapters;};

    void display(std::ostream &s) const override {
        for (int k = 0; k < getNbChapters(); k++){
            //s << getFirstChapter() << " " << chapters[k] <<std::endl;
            //(* firstChapter)++;
            //cout << "\n";
            s << chapters[k] << std::endl;
        }
        //s << *chapters << std::endl;

        //s << this->getFirstChapter() << std::endl;
    }
};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_FILM_H
