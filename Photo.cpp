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

// Displayer
void Photo::play(Photo * photo) const {
    std::string str ("imagej "+photo->getName()+" &");

    system(str.c_str());
}
