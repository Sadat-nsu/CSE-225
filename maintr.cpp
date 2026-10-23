#include <iostream>
#include "TemperatureReading.h"
using namespace std;

int main(){

    cout << "Test 1 with parameterized constructor " << endl;
    TemperatureReading<float> WeekLog(3);
    WeekLog.inputReading();

    printSummary(WeekLog);

    cout << "Highest Temperature: " << WeekLog.getHighestTemperature() << " C" << endl;

    cout << "Test 2 deafualt constructor " << endl;
    TemperatureReading<float> defLog;

    defLog.inputReading();

    printSummary(defLog);

    cout << "Highest Temperatur: " << defLog.getHighestTemperature() << " C" << endl;

    return 0;


}