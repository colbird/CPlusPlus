#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i <= num/2; i++)
        if(num % i == 0)
            return false;
    return true;
}
bool isEmirp(int num){
    int n = 0;
    int temp = num;
    while(temp){
        n = n * 10 + temp % 10;
        temp /= 10;
    }
    if(isPrime(n) && num != n)
        return true;
    else
        return false;
}

int main(){
    int cut = 0;
    for (int i = 2; cut < 100; i++)
        if (isPrime(i) && isEmirp(i)){
            cut++;
            if (cut != 0 && cut % 10 == 0)
                cout << setw(6) << i << endl;
            else
                cout << setw(6) << i;
        }
    return 0;
}
