#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
	srand(time(0));

	string str;
	str += static_cast<char>(rand() % 26 + 'A');
	str += static_cast<char>(rand() % 26 + 'A');
	str += static_cast<char>(rand() % 26 + 'A');

	cout << str << endl;

	return 0;
}
