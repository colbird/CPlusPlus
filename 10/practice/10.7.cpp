#include <iostream>
#include <cctype>
#include <string>
using namespace std;


int* count(const string& s, int counts[], int size){
    for(int i = 0; i < size; i++){
        counts[i] = 0;
    }
    int cut = 0;
    for (int i = 0; i < s.size(); i++){
        if(isalpha(s.at(i))){
            counts[toupper(s.at(i)) - 'A']++;
        }
    }
    return counts;
}

int main(){
    const int SIZE  = 26;
    int counts[SIZE];
    string s;
    getline(cin, s);
    count(s, counts, SIZE);
    for(int i = 0; i < SIZE; i++){
        if (counts[i])
        cout << static_cast<char>('A'+i) << ": " << counts[i] << endl;
    }
    return 0;
}
