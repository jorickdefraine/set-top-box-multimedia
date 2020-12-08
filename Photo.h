//
// Created by jorick on 08/12/2020.
//

#ifndef SET_TOP_BOX_MULTIMEDIA_JORICK_PHOTO_H
#define SET_TOP_BOX_MULTIMEDIA_JORICK_PHOTO_H

class Photo{
protected:
    int latitude = 0, longitude = 0;

public:
    Photo(int latitude, int longitude);
    Photo();
    void setLat(int lat);
    void setLon(int lon);
    int getLat() const;
    int getLon() const;

};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_PHOTO_H
