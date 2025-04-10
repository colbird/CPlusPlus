#include <string>
using namespace std;

class Person{
    public:
        Person(){
            numberOfChildren = 0;
            children = new string[20]; }
        // 释放掉 Person 声明的(string [20])内存无法找到
        // 导致内存泄漏, 要 delete [] children
        ~Person(){
            delete [] children;
        }

        void addAChild(string name){
            children[numberOfChildren++] = name;
        }

        string* getChildren(){
            return children;
        }

        int getNumberOfChildren(){
            return numberOfChildren;
        }

    private:
        string* children;
        int numberOfChildren;
};
