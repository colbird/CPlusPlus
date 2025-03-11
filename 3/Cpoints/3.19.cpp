#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
	srand(time(0));
	int i;
	
	i = rand() % 20;
	cout << i << endl;	// 0 <= i < 20
	
	i = rand() % 20;
	if (i < 10)
		i += 10;
	cout << i << endl;	// 10 <= i < 20
	
	i = rand() % 50;
	if (i < 10)
		i += 10;
	cout << i << endl;	// 10 <= i < 50

	i = rand() % 2;
	cout << i << endl;	// 0 or 1
	
	cout << RAND_MAX << endl;

	return 0;
}
