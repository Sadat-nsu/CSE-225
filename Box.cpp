#include <iostream>

#include "Box.h"

using namespace std;

Box::Box(){
    height = 1;
    width = 1;
    depth = 1;
}

Box::Box(double height, double width, double depth){
    this->height=height;
    this->width=width;
    this->depth=depth;
}

double Box::getHeight(){
    return height;
}

double Box::getWidth(){
    return width;
}

double Box::getDepth(){
    return depth;
}

void Box::setHeight(double height){
    this->height = height;
}

void Box::setWidth(double width){
    this->width = width;
}

void Box::setDepth(double depth){
    this->depth = depth;
}

double Box::getVolume(){
    return height*width*depth;
}

void Box::print(){
    cout << "Box details: " << endl;
    cout << "Height: " << height << endl;
    cout << "Width: " << width << endl;
    cout << "Depth: " << depth << endl;

}