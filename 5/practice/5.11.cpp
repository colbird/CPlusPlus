#include <iostream>
#include <string>
using namespace std;


int main(){
        // 输入学生数（循环次数）
    cout << "请输入学生数: ";
    int number;
    cin >> number;

    
    string firstName = "";
    double max = 0;
    string secName;
    double secFen = 0;

    string name;
    double fen;

    for (int i = 0; i < number; i++){
        cout << "请输入姓名: ";
        cin >> name;
        cout << "请输入成绩: ";
        cin >> fen;
        if (fen > max){
            secName = firstName;
            secFen = max;
            max = fen;
            firstName = name;
        }
    }
    cout << "成绩第二高的是 " << secName << " 成绩为 " << secFen << endl;
    return 0;
}
