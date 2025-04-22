#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i <= num/2; i++)
        if(num % i == 0)
            return false;
    return true;
}
bool isPalindromic(int num){
    int n[10] = {0};
    int cut = 0;
    while (num){
        n[cut++] = num % 10;
        num /= 10;
    }
    for (int i = 0, j = cut-1; i < j; i++, j--){
        if(n[i] - n[j])
            return false;
    }
    return true;
}
int main(){
    int cut = 0;
    for (int i = 2; cut < 100; i++)
        if (isPrime(i) && isPalindromic(i)){
            cut++;
            if (cut != 0 && cut % 10 == 0)
                cout << setw(6) << i << endl;
            else
                cout << setw(6) << i;
        }
    return 0;
}
