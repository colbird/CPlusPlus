#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	// Generate a random number to be guessed
	srand(time(0));
	int number = rand() % 101;

	cout << "Guess a magic number between 0 and 100";

	// Prompt the user to guess the number
	cout << "\nEnter your guess: ";
	int guess;
	cin >> guess;

	if (guess == number)
		cout << "Yes, the number is " << number << endl;
	else if (guess > number)
		cout << "your guess is too high" << endl;
	else
		cout << "your guess is too low" << endl;

	return 0;
}
