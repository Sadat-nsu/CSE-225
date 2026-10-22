#include <iostream>
#include "TemperatureReading.h"
using namespace std;

template<class T>
TemperatureReading<T>::TemperatureReading(){
    temperature = nullptr;
    days = 0;
}    

template<class T>
TemperatureReading<T>::TemperatureReading(int d){
    days = d;
    temperature = new T[days];
}

template<class T>
TemperatureReading<T>::~TemperatureReading(){
    delete [] temperature;
}

template<class T>
void TemperatureReading<T>::inputReading(){
    if(temperature==nullptr){
        cout << "Enter number of days: ";
        cin >> days;
        temperature = new T[days];
    }

    for (int i=0;i<days;i++){
        cout << "Enter temperature of day " << "i+1 " << ":" << endl;
        cin >> temperature[i]; 
    }
}

template<class T>
T TemperatureReading<T>::getHighestTemperature(){
    if(days==0 || temperature == nullptr){
        return T();
    }

    T maxTemp = temperature[0];
    for(int i=0;i<days;i++){
        if(temperature[i] > maxTemp){
            maxTemp=temperature[i];
        }

    }
    return maxTemp;
}

template<class U>
void printSummary(const TemperatureReading<U> &obj){
    cout << "\n---Temperature Summary---" << endl;
    cout << "Total days : " << obj.days << endl;
    if(obj.temperature==nullptr || obj.days==0){
        cout << "No temperature data recorded. " << endl;
        return;
    }
    for(int i=0; i<obj.days; i++) {
        cout << "Day " << i+1 << " : " << obj.temperature << endl;
    }
}