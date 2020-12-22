#include <iostream>
#include <sstream>
#include "SetTopBoxMultimedia.h"
#include "Photo.h"
#include "Video.h"
#include "Film.h"
#include <list>

using namespace std;

int main() {
    std::cout << "Hello World!" << std::endl;

    SetTopBoxMultimedia ** tab = new SetTopBoxMultimedia*[100];
    unsigned int count = 0;
    tab[count++] = new Photo("rennes1", "data/rennes1.jpg",960, 722);
    tab[count++] = new Video("freedomcorp2", "data/freedomcorp2.mp4",23);
    tab[count++] = new Video("mind-the-gap", "data/mind-the-gap.mp4",10);
    tab[count++] = new Photo("tp", "data/tp.jpeg",200, 200);

    for (unsigned int k = 0; k < count; k++){
        tab[k]->display(cout);
        //tab[k]->play();
        cout << "\n";
    }
    delete []tab;

    //film1 = new Film("freedomcorp2", "data/freedomcorp2.mp4",23, chapters=10, 3)
    //film1->display(cout);
    //cout << "\n";

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
}
