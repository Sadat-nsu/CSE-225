#include "StudentMarks.h"
#include <iostream>
using namespace std;

int main(){
    StudentMarks<char> Stduent0;


    cout << " 1st Student's result " << endl;
    StudentMarks<float> Stduent1(4);
    Stduent1.inputMarks();
    Stduent1.displayMarks();
    cout << "Average makrs: " << Stduent1.calculateAverage() << endl;
    displayHighest(Stduent1);


    cout << " 2nd Student's result " << endl;
    StudentMarks<double> Stduent2(3);
    Stduent2.inputMarks();
    Stduent2.displayMarks();
    cout << "Average makrs: " << Stduent2.calculateAverage() << endl;
    displayHighest(Stduent2);


}