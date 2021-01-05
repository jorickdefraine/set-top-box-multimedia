//
// Created by jorick on 05/01/2021.
//

#include "Group.h"

#include <iostream>

using namespace std;

void Group::print(ostream&  s) const {
    s << "The group " << getName() << " has the following media: " << endl;
    for (auto it : *this){
        it->display(s);
    }

}
Group::~Group(){cout<<"The media object is actually destructed!"<<endl;}