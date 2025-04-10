#include <iostream>
#include "Course.h"
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

string Course::getCourseName() const {
    return courseName;
}

void Course::addStudent(const string& name){
    students[numberOfStudents] = name;
    numberOfStudents++;
}

void Course::dropStudent(const string& name){
    // 找到要删除的学生
    int i = 0;
    for (i = 0; i < numberOfStudents; i++)
        if (students[i] == name)
            break;  // 找到了
    if (i == numberOfStudents){
        cout << ":(" << endl;   // 没找到
        return;
    }
    for (int j = i + 1; j < numberOfStudents; j++){
        students[i] = students[j];
    }
    numberOfStudents--;  // 同学总数量减少
}

string* Course::getStudents() const {
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
