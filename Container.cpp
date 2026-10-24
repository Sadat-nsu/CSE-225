#include <iostream>
#include "Container.h"
using namespace std;

template<class T>
Container<T>::Container(){
    value = T();
}

template<class T>
Container<T>::Container(T val){
    value = val;
}

template<class T>
void Container<T>::setValue(T val){
    value=val;
}

template<class T>
T Container<T>::getValue() const{
    return value;
}

template<class T>
void Container<T>::display() const{
    cout << "The value inside container is " << value << endl;
}