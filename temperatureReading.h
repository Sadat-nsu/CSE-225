#ifndef TEMPERATURE_READING_H
#define TEMPERATURE_READING_H

template<class T>
class TempratureReading{
private:
    T temprature;
    int days;

public: 
    TempratureReading();
    TempratureReading(int d);
    ~TempratureReading();

    void inputReading();
    T getHighest();

    template<class U>
    friend void printSummary(const TempratureReading<U> &obj);

};
#endif