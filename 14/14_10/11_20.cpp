#include <iostream>
#include "CourseWithCustomCopyConstructor.h"
using namespace std;

Course::Course(const string& courseName, int capacity){
    numberOfStudents = 0;
    this -> courseName = courseName;
    this -> capacity = capacity;
    students = new string[capacity];
}

Course::~Course(){
    delete [] students;
}

string Course::getCourseName() const{
    return courseName;
}

void Course::addStudent(const string& name){
    if (numberOfStudents >= capacity){
        cout << "The maximum size of array exceeded" << endl;
        cout << "Program terminates now" << endl;
        exit(0);
    }

    students[numberOfStudents++] = name;
}

void Course::dropStudent(const string& name){
    int pos = 0;
    for (pos = 0; pos < numberOfStudents; pos++)
        if (students[pos] == name)
            break;
    if (pos < numberOfStudents){

        for (; pos < numberOfStudents - 1; pos++)
            students[pos] = students[pos+1];
        numberOfStudents--;
    }
    else
        return;
}

string* Course::getStudents() const{
    return students;
}

int Course::getNumberOfStudents() const{
    return numberOfStudents;
}

Course::Course(const Course& course){
    courseName = course.courseName;
    numberOfStudents = course.numberOfStudents;
    capacity = course.capacity;
    students = new string[capacity];
    for (int i = 0; i < numberOfStudents; i++)
        students[i] = course.students[i];
}

const Course& Course::operator=(const Course& course){
    if (this != &course){
        courseName = course.courseName;
        numberOfStudents = course.numberOfStudents;
        capacity = course.capacity;

        delete [] this->students;

        // Create a new array with the same capacity as course copied
        students = new string[capacity];
        for (int i = 0; i < numberOfStudents; i++)
            students[i] = course.students[i];
    }
    return *this;
}
