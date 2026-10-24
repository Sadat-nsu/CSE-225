#ifndef CONTAINER_H
#define CONTAINER_H

template <class T>
class Container{
    private:
        T value;
      
    public:
        Container();
        Container(T val);
        void setValue(T val);
        T getValue() const;
        void display() const;

};
#include "Container.cpp"
#endif