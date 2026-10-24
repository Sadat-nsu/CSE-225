#ifndef STUDENT_MARKS_H
#define STUDENT_MARKS_H

#include <iostream>
using namespace std;

template <class T>
class StudentMarks{
    private:
        T *marks;
        int courses;

    public:
        StudentMarks();
        StudentMarks(int c);
        ~StudentMarks();
        
        void inputMarks();
        void displayMarks() const;
        double calculateAverage() const;

    template <class U>
        friend void displayHighest(const StudentMarks<U> &Student);    



};
#include "StudentMarks.cpp"
#endif