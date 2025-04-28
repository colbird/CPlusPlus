#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string& s){
    for (int i = 0, j = s.size()-1; i < j; i++, j--){
        if (toupper(s.at(i)) != toupper(s.at(j)))
            return false;
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    if (isPalindrome(s)){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
