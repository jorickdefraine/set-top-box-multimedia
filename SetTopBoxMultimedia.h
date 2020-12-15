//
// Created by jorick on 08/12/2020.
//

#ifndef SET_TOP_BOX_MULTIMEDIA_JORICK_SETTOPBOXMULTIMEDIA_H
#define SET_TOP_BOX_MULTIMEDIA_JORICK_SETTOPBOXMULTIMEDIA_H
#include <string>
#include <iostream>

using namespace std;

class SetTopBoxMultimedia{
protected:
    string name, pathname;

public:
    SetTopBoxMultimedia(string name, string pathname);
    SetTopBoxMultimedia();
    virtual ~SetTopBoxMultimedia();
    void setName(string n);
    void setPathname(string p);
    string getName() const;
    string getPathname() const;
    virtual void display(std::ostream & s) const;
    virtual void play() const=0;
};

#endif //SET_TOP_BOX_MULTIMEDIA_JORICK_SETTOPBOXMULTIMEDIA_H
