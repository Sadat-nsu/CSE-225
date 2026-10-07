#ifndef BOX_H
#define BOX_H

class Box {
    private:
    double height;
    double width;
    double depth;

    public:

    Box();
    Box(double, double, double);

    double getHeight();
    double getWidth();
    double getDepth();

    void setHeight(double);
    void setWidth(double);
    void setDepth(double);

    double getVolume();
    void print();
};

#endif 
