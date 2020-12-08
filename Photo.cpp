//
// Created by jorick on 08/12/2020.
//

#include "Photo.h"

Photo::Photo(int _latitude, int _longitude) {
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