//
// Created by jorick on 08/12/2020.
//

#ifndef SET_TOP_BOX_MULTIMEDIA_JORICK_VIDEO_H
#define SET_TOP_BOX_MULTIMEDIA_JORICK_VIDEO_H
#include "SetTopBoxMultimedia.h"
#include <string>

class Video : public SetTopBoxMultimedia{
protected:
    int duration{};

public:
    Video(int duration);
    Video();
    ~Video();
    void setDuration(int dur);
    int getDuration() const;
    void display(std::ostream &s) const override{
        SetTopBoxMultimedia::display(s);
    };
    void play() const;

};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_VIDEO_H
