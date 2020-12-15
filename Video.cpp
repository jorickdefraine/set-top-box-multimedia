//
// Created by jorick on 08/12/2020.
//

#include "Video.h"
#include "SetTopBoxMultimedia.h"

Video::Video(string name, string pathname, int _duration) : SetTopBoxMultimedia(name, pathname) {
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


// Player
void Video::play() const {
    std::string str ("mpv "+this->getName()+" &");

    system(str.c_str());

}