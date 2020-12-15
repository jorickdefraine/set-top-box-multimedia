//
// Created by jorick on 08/12/2020.
//

#include "SetTopBoxMultimedia.h"
#include <ostream>

using namespace std;

SetTopBoxMultimedia::SetTopBoxMultimedia(string _name, string _pathname) {
    name = _name;
    pathname = _pathname;
}

// Setter
void SetTopBoxMultimedia::setName(string n){
    name = n;
}

void SetTopBoxMultimedia::setPathname(string p){
    pathname = p;
}

// Getter
string SetTopBoxMultimedia::getName() const{
    return name;
}

string SetTopBoxMultimedia::getPathname() const{
    return pathname;
}

SetTopBoxMultimedia::~SetTopBoxMultimedia() {
}

// Displayer
void SetTopBoxMultimedia::display(std::ostream & s) const {
    s << this->getName() << " " << this->getPathname() << std::endl;
}

// Player
void SetTopBoxMultimedia::play() const {}