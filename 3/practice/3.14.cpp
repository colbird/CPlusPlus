#include <iostream>
#include <ctime>	// for time function
#include <cstdlib>	// for rand and srand function
using namespace std;

int main(){
	// Generate a lottery
	srand(time(0));
	int lottery = rand() % 1000;

	// Prompt the user to enter a guess
	cout << "Enter your lottery pick (three digits): ";
	int guess;
	cin >> guess;
	
	// Get digits from lottery
	int temp = lottery;
	int lotteryDigit1 = temp / 100;
	temp %= 100;
	int lotteryDigit2 = temp / 10;
	int lotteryDigit3 = temp % 10;

	// Get digits frot lottery
	temp = guess;
	int guessDigit1 = temp / 100;
	temp %= 100;
	int guessDigit2 = temp / 10;
	int guessDigit3 = temp % 10;
	
	cout << "The lottery number is " << lotteryDigit1 << lotteryDigit2 << lotteryDigit3 << endl;

	// Check the guess
	if (guess == lottery)
		cout << "Exact match: you win $10,000" << endl;
	else if (guessDigit1 == lotteryDigit1 && guessDigit2 == lotteryDigit3 && guessDigit3 == lotteryDigit2
	      || guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1 && guessDigit3 == lotteryDigit3
	      || guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit3 && guessDigit3 == lotteryDigit1
	      || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit1 && guessDigit3 == lotteryDigit2
	      || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit2 && guessDigit3 == lotteryDigit1)
		cout << "Match all digits: you win $3,000" << endl;

	else if (guessDigit1 == lotteryDigit1
	      || guessDigit1 == lotteryDigit2
	      || guessDigit1 == lotteryDigit3
	      || guessDigit2 == lotteryDigit1
	      || guessDigit2 == lotteryDigit2
	      || guessDigit2 == lotteryDigit3
	      || guessDigit3 == lotteryDigit1
	      || guessDigit3 == lotteryDigit2
	      || guessDigit3 == lotteryDigit3)
		cout << "Match one digit: you win $1,000" << endl;
	else
		cout << "Sorry, no match" << endl;

	return 0;
}
