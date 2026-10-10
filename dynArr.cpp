#include "dynArr.h"
#include ".git/dynArr.h"
#include <cstddef>
using namespace std;

dynArr::dynArr(){
    data = NULL;
    size = 0;

}

dynArr::dynArr( int s){
    data = new int [s];
    size = s;
}

dynArr::~dynArr(){
    delete [] data;
}

void dynArr::setValue(int index, int value){
    data[index]=value;
}

int dynArr::getValue(int index){
    return data[index];
}

void dynArr::allocate(int s){
    if(data != nullptr){
        delete [] data;
    }
    data = new int[s];
    size=s;
}

