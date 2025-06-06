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

void printPrimeNumbers(int numberOfPrimes){
    const int NUMBER_OF_PRIMES = 50;    // Number of prime to display
    const int NUMBER_OF_PRIMES_PER_LINE = 10;   // Display 10 per line
    int count = 0;  // Count the number of prime numbers
    int number = 2; // A number to be tested for primeness

    // Repeatedly find prime numbers
    while (count < numberOfPrimes){
        // Print the prime number and increase the count
        if (isPrime(number)){
            count++;    // Increase the count
            if (count % NUMBER_OF_PRIMES_PER_LINE == 0){
                // Print the number and advance to the new line
                cout << setw(4) << number << endl;
            }
            else
                cout << setw(4) << number;
        }
        // Check if the next number is prime
        number++;
    }
}

int main(){
    cout << "The first 50 prime numbers are \n";
    printPrimeNumbers(50);

    return 0;
}
