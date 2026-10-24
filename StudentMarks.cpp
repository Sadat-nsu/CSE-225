#include "StudentMarks.h"
#include <iostream>
using namespace std;

template<class T>
StudentMarks<T>::StudentMarks(){
    courses = 0;
    marks = nullptr;
}

template<class T>
StudentMarks<T>::StudentMarks(int c){
    courses=c;
    if (courses>0){
        marks = new T[courses];
    } else{
        courses = 0;
        marks = nullptr;
    }
}

template<class T>
StudentMarks<T>::~StudentMarks(){
    delete [] marks;
    marks = nullptr;
}

template<class T>
void StudentMarks<T>::inputMarks(){
    if(courses==0 || marks==nullptr){
        cout << "Enter number of courses taken: " << endl;
        cin >> courses;
        if(courses > 0){
        marks = new T[courses];
        } else {
            courses = 0;
            marks = nullptr;
            return;
        }
    }
    for (int i=0;i<courses;i++){
        cout << "Enter the marks of course no. " << (i+1) << endl;
        cin >> marks[i];
    }
}

template <class T>
void StudentMarks<T>::displayMarks() const{
    if(courses == 0 || marks==nullptr) {
        cout << "No records to show." << endl;
    } else {
        for(int i=0;i<courses;i++){
            cout << "Marks of course no. " << (i+1) << " is " << marks[i] << endl; 
        }
    }
}

template <class T>
double StudentMarks<T>::calculateAverage() const{
    if(courses==0 || marks == nullptr) return 0.0;
    double sum = 0;
    for (int i=0;i<courses;i++){
        sum += marks[i];
    } return sum/courses;
}

template<class U>
void displayHighest(const StudentMarks<U> &Student){
    if(Student.courses == 0 || Student.marks==nullptr) {
        cout << "No records to show." << endl;
        return;
    } 
    U Highest = Student.marks[0];
        for (int i=0;i<Student.courses;i++){
         if(Student.marks[i]>Highest){
            Highest=Student.marks[i];
         }
         
        }
        cout << "Highest mark is " << Highest << endl;
}