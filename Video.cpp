//
// Created by jorick on 08/12/2020.
//

#include "Video.h"
#include "SetTopBoxMultimedia.h"

Video::Video(int _duration) : SetTopBoxMultimedia(name, pathname) {
    duration = _duration;
}

// Setter
void Video::setDuration(int dur) {
    duration = dur;
}

// Getter
int Video::getDuration() const {
    return duration;
}

// Displayer
void Video::play(Video * video) const {
    std::string str ("mpv "+video->getName()+" &");

    system(str.c_str());
}
