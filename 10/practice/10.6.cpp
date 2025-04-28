#include <iostream>
#include <cctype>
#include <string>
using namespace std;


int countLetters(const string& s){
    int cut = 0;
    for (int i = 0; i < s.size(); i++){
        if(isalpha(s.at(i)))
            cut++;
    }

    return cut;
}

int main(){
    string s;
    getline(cin, s);

    cout << countLetters(s) << endl;

    return 0;
}
