#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int correctCount = 0;	// Count the number of correct answers
	int count = 0;		// Count the number of questions
	long startTime = time(0);
	const int NUMBER_OF_QUESTIONS = 10;

	srand(time(0));

	while (count < NUMBER_OF_QUESTIONS){
		// 1. Generate two tandom single-digit integers
		int number1 = rand() % 15 + 1;
		int number2 = rand() % 15 + 1;

		// 2. Prompt the student to answer "what is number1 - number2?"
		cout << "What is " << number1 << " + " << number2 << "? ";
		int answer;
		cin >> answer;

		// 3. Grade the answer and display the result
		if (number1 + number2 == answer){
			cout << "You are correct!\n";
			correctCount++;
		}
		else
			cout << "Your anser is wrong.\n" << number1 << " + " <<
			number2 << " should be " << (number1 + number2) << endl;
		
		// Increase the count
		count++;
	}

	long endTime = time(0);
	long testTime = endTime - startTime;

	cout << "Correct count is " << correctCount << "\nTest time is "
	     << testTime << " seconds" <<endl;

	return 0;
}
