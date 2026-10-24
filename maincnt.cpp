#include <iostream>
#include "Container.h"
using namespace std;

int main(){
    Container<int> intObj(100);
    intObj.display();
    intObj.setValue(250);
    cout << "Updated value is " << intObj.getValue() << endl;

    Container<double> dblObj(23.45);
    dblObj.display();
    dblObj.setValue(45.87);
    cout << "Updated value is " << dblObj.getValue() << endl;

    Container<char> charObj('S');
    charObj.display();
    charObj.setValue('X');
    cout << "Updated value is " << charObj.getValue() << endl;
}
