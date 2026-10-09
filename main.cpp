#include <iostream>

#include "Box.h"

using namespace std;

int main(){
    Box box1;
    
    Box box2(4,5,7);
    box2.print();

    box2.setWidth(9);

    box2.print();

    box2.getVolume();

    cout << "Volume: " << box2.getVolume() << endl;

    return 0;


}