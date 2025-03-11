#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	// 1. Generate two random single-digit integers
	srand(time(0));
	int number1 = rand() % 100;
	int number2 = rand() % 100;


	// 2. Prompt the student to answer "what in number1 + number2?"
	cout << "What is " << number1 << " + " << number2 << "? ";
	int answer;
	cin >> answer;

	// 3. Grade the answer and display the result
	if (number1 + number2 == answer)
		cout << "You are correct";
	else
		cout << "Your answer is wrong. " << number1 << " + " << number2
		     << "should be " << (number1 + number2) << endl;

	return 0;
}
