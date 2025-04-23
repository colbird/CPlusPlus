#include <iostream>
using namespace std;

int sumOfOddPlaces(int n){
    int cut = 0;
    int sum = 0;
    while (n){
        cut++;
        if(cut % 2)
            sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int num = 0;
    cin >> num;
    cout << num << " = " << sumOfOddPlaces(num) << endl;
    return 0;
}
