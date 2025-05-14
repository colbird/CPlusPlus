#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
using namespace std;


class Course{
    public:
        Course(const string& courseName, int capacity);
        Course(const Course&);
        string getCourseName() const;
        int getCapacity() const;
        void addStudent(const string& name);
        void dropStudent(const string& name);
        vector<string> getStudents() const;
        int getNumberOfStudent() const;
    private:
        string courseName;
        vector<string> students;
        int capacity;
};

Course::Course(const string& courseName, int capacity){
    this -> courseName = courseName;
    this -> capacity = capacity;
}

Course::Course(const Course& data){
    courseName = data.courseName;
    capacity = data.capacity;
    students = data.students;
}

string Course::getCourseName() const{
    return courseName;
}

int Course::getCapacity() const{
    return capacity;
}

void Course::addStudent(const string& name){
    students.push_back(name);
}

void Course::dropStudent(const string& name){
    vector<string> newStudents;
    for (int i = 0; i < students.size(); i++){
        if (students.at(i) == name)
            i++;
        newStudents.push_back(students.at(i));
    }
    students = newStudents;
}

vector<string> Course::getStudents() const{
    return students;
}

int Course::getNumberOfStudent() const{
    return students.size();
}


#endif
