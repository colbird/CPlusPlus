#include <iostream>
using namespace std;

int main(){
	// Receive the amount
	cout << "Enter an amount in double, for example (1156 for 11.56): ";
	int amount;
	cin >> amount;


	// Find the number of one dollars
	int numberOfOneDollars = amount / 100;
	amount = amount % 100;

	// Find the number of quarters in the remaining amount
	int numberOfQuarters = amount / 25;
	amount = amount % 25;

	// Find the number of dims in the remaining amount
	int numberOfDimes = amount / 10;
	amount = amount % 10;

	// Find the number of nickels in the remaining amount
	int numberOfNickels = amount / 5;
	amount = amount % 5;

	// Find the number of pennies in the remaining amount
	int numberOfPennies = amount;

	// Display results
	cout << "Your amount " << amount << " consists of " << endl <<
	  "  " << numberOfOneDollars << " dollars" << endl <<
	  "  " << numberOfQuarters << " quarters" << endl <<
	  "  " << numberOfDimes << " dims" << endl <<
	  "  " << numberOfNickels << " nickels" << endl <<
	  "  " << numberOfPennies << " pennies" << endl;

	return 0;
}
