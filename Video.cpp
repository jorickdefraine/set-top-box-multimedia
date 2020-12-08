//
// Created by jorick on 08/12/2020.
//

#include "Video.h"

Video::Video(int _duration) {
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