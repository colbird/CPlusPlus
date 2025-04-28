#include <iostream>
#include <string>
using namespace std;

bool isAnagram(const string& s1, const string& s2){
    for(int i = 0; i < s1.size(); i++){
        int position = s2.find(s1.at(i));
        if (position == string::npos)
            return false;
    }
    for(int i = 0; i < s2.size(); i++){
        int position = s1.find(s2.at(i));
        if (position == string::npos)
            return false;
    }
        return 1;
}

int main(){
    string word1;
    cin >> word1;
    string word2;
    cin >> word2;
    if (isAnagram(word1, word2)){
       cout << word1 << " and " << word2 << " are anagrams" << endl;
    }
    else{
       cout << word1 << " and " << word2 << " not anagrams" << endl;
    }
    return 0;
}
