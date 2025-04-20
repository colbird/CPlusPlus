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
	int cut = 0;
	for(int i = 2; i < 10000; i++){
		if (isPrime(i))
			cut++;
	}
	cout << cut << endl;
    return 0;
}
