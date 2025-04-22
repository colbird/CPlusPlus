#include <iostream>
#include <cstdlib>
using namespace std;

bool twoDice(){
    int i, j;
    i = rand() % 6 + 1;
    j = rand() % 6 + 1;
    int sum = i + j;
    cout << "You rolled " << i << " + " << j << " = " << sum << endl;
    if(sum == 2 || sum == 3 || sum == 12)
        return false;
    else if(sum == 7 || sum == 11)
        return true;
    else{
        i = rand() % 6 + 1;
        j = rand() % 6 + 1;
        int newSum = i + j;
        cout << "point is " << sum << endl;
        cout << "You rolled " << i << " + " << j << " = " << newSum << endl;
        if (sum == newSum){
            return true;
        }
        else{
            return false;
        }
    }
    
}

int main(){
    srand(time(0));

    int cut = 0;
    for(int i = 0; i < 10000; i++){
        if(twoDice()){
            cut++;
        }
    }
    cout << cut << endl;
    return 0;
}
