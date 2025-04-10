#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity){
    numberOfSudents = 0;
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
    students[numberOfSudents] = name;
    numberOfSudents++;
}

void Course::dropStudent(const string& name){
    // 找到要删除的学生
    int i = 0;
    for (i = 0; i < numberOfSudents; i++)
        if (students[i] == name)
            break;  // 找到了
    if (i == numberOfSudents){
        cout << ":(" << endl;   // 没找到
        return;
    }
    for (int j = i + 1; j < numberOfSudents; j++){
        students[i] = students[j];
    }
    numberOfSudents--;  // 同学总数量减少
}

string* Course::getStudents() const {
    return students;
}

int Course::getNumberOfStudents() const{
    return numberOfSudents;
}
