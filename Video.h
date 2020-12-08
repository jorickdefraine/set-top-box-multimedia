//
// Created by jorick on 08/12/2020.
//

#ifndef SET_TOP_BOX_MULTIMEDIA_JORICK_VIDEO_H
#define SET_TOP_BOX_MULTIMEDIA_JORICK_VIDEO_H
#include "SetTopBoxMultimedia.h"
#include <string>

class Video : public SetTopBoxMultimedia{
protected:
    int duration = 0;

public:
    Video(int duration);
    Video();
    void setDuration(int dur);
    int getDuration() const;
    void play(Video * video) const;

};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_VIDEO_H
