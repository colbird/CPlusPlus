#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int* count(const string& s){
    int* counts = new int[10];
    for (int i = 0; i < 10; i++)    // 初始化
        counts[i] = 0;
    for (int i = 0; i < s.size(); i++){
        if (isdigit(s.at(i))){
            counts[s.at(i)- '0']++;
        }
    }
    return counts;
}

int main(){
    string str;
    getline(cin, str);
    int *counts = count(str);
    for(int i = 0; i < 10; i++){
        cout << counts[i] << endl;
    }
    return 0;
}
