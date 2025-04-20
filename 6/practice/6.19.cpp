#include <iostream>
#include <iomanip>
using namespace std;

// Check whether number is prime
bool isPrime(int number){
    for (int divisor = 2; divisor <= number / 2; divisor++){
        if (number % divisor == 0){
            return false;
        }
    }
    return true;
}

int main(){
	int num[2] = {0};
	for (int i = 3;i < 1000; i++){
		if(isPrime(i)){
			num[0] = num[1];
			num[1] = i;
			if(num[1] - num[0] == 2){
				cout << "(" << num[0] << ", "
				<< num[1] << ")" << endl;
			}
		}
	}
    return 0;
}
