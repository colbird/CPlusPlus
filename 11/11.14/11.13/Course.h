#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;

class Course{
    public:
        Course(const string& courseName, int capacity);
        ~Course();
        string getCourseName() const;
        void addStudent(const string& name);
        void dropStudent(const string& name);
        string* getStudents() const;
        int getNumberOfStudents() const;

    private:
        string courseName;
        string* students;
        int numberOfSudents;
        int capacity;
};

#endif
