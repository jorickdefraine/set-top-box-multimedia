//
// Created by jorick on 08/12/2020.
//

#ifndef SET_TOP_BOX_MULTIMEDIA_JORICK_PHOTO_H
#define SET_TOP_BOX_MULTIMEDIA_JORICK_PHOTO_H
#include "SetTopBoxMultimedia.h"

class Photo : public SetTopBoxMultimedia{
protected:
    int latitude{}, longitude{};

public:
    Photo(int latitude, int longitude);
    Photo();
    ~Photo();
    void setLat(int lat);
    void setLon(int lon);
    int getLat() const;
    int getLon() const;
    void display(std::ostream &s) const override{
        SetTopBoxMultimedia::display(s);
    };
    void play() const;

};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_PHOTO_H
