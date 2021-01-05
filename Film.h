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
    int *chapters = nullptr;

public:

    Film();
    Film(string name, string pathname, int duration, int nbChapters, const int *chapters);
    Film(const Film& FilmCopied);
    Film& operator = (const Film& FilmCopied);
    virtual ~Film() final {delete[] chapters; cout<<"Film "<<getName()<<" is dying."<<endl;}

    void setChapters(int _nbChapters, int *_chapters);

    const int *getChapters() const{
        //int *chapters_copy = chapters;

        int * chapters_copy = new int[nbChapters];
        for(int i = 0; i < nbChapters; i++) {
            chapters_copy[i] = chapters[i];
        }
        //delete[] chapters;
        return chapters_copy;
    }

    const int getNbChapters() const{return nbChapters;}

    void display(std::ostream &s) const override {
        for (int k = 0; k < getNbChapters(); k++){
            //s << getFirstChapter() << " " << chapters[k] <<std::endl;
            //(* firstChapter)++;
            //cout << "\n";
            s << getChapters() << std::endl;
        }
        //s << *chapters << std::endl;

        //s << this->getFirstChapter() << std::endl;
    }
};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_FILM_H
