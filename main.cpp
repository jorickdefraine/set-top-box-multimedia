#include <iostream>
#include <sstream>
#include "SetTopBoxMultimedia.h"
#include "Photo.h"
#include "Video.h"
#include <list>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    SetTopBoxMultimedia * setTopBoxMultimedia1 = new SetTopBoxMultimedia("objet1", "set-top-box-multimedia-jorick/objet1.txt");
    setTopBoxMultimedia1->display(std::cout, setTopBoxMultimedia1);


    //std::list<SetTopBoxMultimedia> listofmedia = { Photo(10, 15),
    //                                               Photo(12, 10),
    //                                               Video(10),
    //                                               Photo(12, 15),
    //                                               Video(9),
    //                                               Video(12) };
    //std::list<SetTopBoxMultimedia>::iterator it;
    //for (it = listofmedia.begin(); it != listofmedia.end(); it++) {
    //    it->display();
    //}
    return 0;
}
