#include <iostream>
#include <string>
using namespace std;

string sort(string& s){
    for (int i = 0; i < s.size()- 1; i++){
        int min = i;
        for (int j = i + 1; j < s.size(); j++){
            if (s.at(min) > s.at(j))
                min = j;
        }
        if (min != i){
                char emp = s.at(i);
                s.at(i) = s.at(min);
                s.at(min) = emp;
        }
    }
    return s;
}

int main(){
    string str;
    cin >> str;
    cout << sort(str) << endl;
    return 0;
}
