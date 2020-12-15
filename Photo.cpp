//
// Created by jorick on 08/12/2020.
//

#include "Photo.h"
#include "SetTopBoxMultimedia.h"
#include <string>
using namespace std;

Photo::Photo(int _latitude, int _longitude) : SetTopBoxMultimedia(name, pathname) {
    latitude = _latitude;
    longitude = _longitude;
}

// Setter
void Photo::setLat(int lat) {
    latitude = lat;
}

void Photo::setLon(int lon) {
    longitude = lon;
}

// Getter
int Photo::getLat() const {
    return latitude;
}

int Photo::getLon() const {
    return longitude;
}

Photo::~Photo() noexcept {}

// Player
void Photo::play() const {
    std::string str ("imagej "+this->getName()+" &");

    system(str.c_str());

}
