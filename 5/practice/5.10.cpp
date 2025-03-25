#include <iostream>
#include <string>
using namespace std;


int main(){
        // 输入学生数（循环次数）
    cout << "请输入学生数: ";
    int number;
    cin >> number;

    
    string maxOfName;
    double max = 0;
    string name;
    double fen;

    for (int i = 0; i < number; i++){
        cout << "请输入姓名: ";
        cin >> name;
        cout << "请输入成绩: ";
        cin >> fen;
        if (fen > max){
            max = fen;
            maxOfName = name;
        }
    }
    cout << "成绩最高的是 " << maxOfName << " 成绩为 " << max << endl;
    return 0;
}
