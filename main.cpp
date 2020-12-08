#include <iostream>
#include <sstream>
#include "SetTopBoxMultimedia.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    SetTopBoxMultimedia * o = new SetTopBoxMultimedia("objet1", "set-top-box-multimedia-jorick/objet1.txt");
    o->showVar(std::cout, o);
    return 0;
}
