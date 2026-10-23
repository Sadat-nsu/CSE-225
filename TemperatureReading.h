#ifndef TEMPERATURE_READING_H
#define TEMPERATURE_READING_H

template<class T>
class TemperatureReading{
private:
    T *temperature;
    int days;

public: 
    TemperatureReading();
    TemperatureReading(int d);
    ~TemperatureReading();

    void inputReading();
    T getHighestTemperature();

    template<class U>
    friend void printSummary(const TemperatureReading<U> &obj);

};
#include "TemperatureReading.cpp"
#endif