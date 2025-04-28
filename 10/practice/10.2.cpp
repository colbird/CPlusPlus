#include <iostream>
#include <string>
using namespace std;

string commonChars(const string& s1, const string& s2){
    string publicStr;
    for (int i = 0; i < s1.size(); i++){
        int position = s2.find(s1.at(i));
        if (position != string::npos){
            if (publicStr.find(s1.at(i)) == string::npos)
                publicStr.append(1, s1.at(i));
        }
    }
    return publicStr;
}

int main(){
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    string empstr = commonChars(str1, str2);
    if (!empstr.empty())
        cout << empstr;
    else 
        cout << "No common characters" << endl;

    return 0;
}
