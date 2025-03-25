#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int NUMBER_LIMIT = 1000;
    const int NUMBER_OF_PRIMES_PER_LINE = 8;   // Display 10 per line
    int count = 0;
    int number = 2; // A number to be tested fot primeness

    cout << "The first 50 prime numbers are" << endl;
    while (number <= 1000){
        //
        // Assume the number is prime
        bool isPrime = true;    // Is the current number prime?
                                //
        for(int divisor = 2; divisor <= number / 2; divisor++){
            if (number % divisor == 0){
                // If true, the number is not prime
                isPrime = false;    // Set isPrime to false
                break;  // Exit the for loop
            }
        }
        
        // Display the prime number and increase the count
        if(isPrime){
            count++;    // Increase the count

            if (count % NUMBER_OF_PRIMES_PER_LINE == 0)
                // Display  the number and advance to the new line
                cout << setw(4) << number << endl;
            else
                cout << setw(4) << number;
        }
        number ++;
    }

    return 0;
}
