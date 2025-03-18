#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// Open a file
	ifstream input("test.txt");

	int score1, score2, score3;

	// Read data
	input >> score1;
	input >> score2;
	input >> score3;
	
	cout << "Total score is " << score1 + score2 + score3 << endl;

	// Close file
	input.close();

	cout << "Done" << endl;

	return 0;
}
