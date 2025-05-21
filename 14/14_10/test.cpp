#include <iostream>
#include "CourseWithCustomCopyConstructor.h"
using namespace std;

int main(){
    Course course1("Java Programming", 10);
    Course course2("C++ Programming", 14);
    course2 = course1;

    course1.addStudent("Reter Pan");
    course2.addStudent("Lisa Ma");

    cout << "students in coursel1: " <<
        course1.getStudents()[0] << endl;
    cout << "students in coursel2: " <<
        course2.getStudents()[0] << endl;

    return 0;
}
