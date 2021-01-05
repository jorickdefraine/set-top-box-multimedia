//
// Created by jorick on 05/01/2021.
//

#ifndef SET_TOP_BOX_MULTIMEDIA_JORICK_GROUP_H
#define SET_TOP_BOX_MULTIMEDIA_JORICK_GROUP_H
#include "SetTopBoxMultimedia.h"
#include <string>
#include <list>
#include <memory>

using MediaPtr=std::shared_ptr<SetTopBoxMultimedia>;
using MediaList=std::list<MediaPtr>;

class Group: public MediaList
{
private:
    //list name
    std::string name="";

public:
    //constructor
    Group(std::string name=""):name(name){}

    //destructor
    virtual ~Group();

    //getter
    std::string getName() const{return name;}

    //print
    void print(std::ostream& s)const;

};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_GROUP_H
