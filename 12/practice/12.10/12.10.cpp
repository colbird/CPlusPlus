#include <iostream>
#include "Course.h"
using namespace std;

int main(){
    Course test1("math", 10);
    cout << test1.getCourseName() << endl;
    cout << test1.getCapacity() << endl;
    test1.addStudent("du");
    test1.addStudent("cheng");
    test1.addStudent("long");

    vector<string> test = test1.getStudents();
    
    for (int i = 0; i < test.size(); i++){
        cout << test.at(i) << " ";
    }
    cout << endl;
    return 0;
}
