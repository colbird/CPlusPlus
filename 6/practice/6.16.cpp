#include <iostream>
#include <cstdlib>
using namespace std;

void printMatrix(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << rand() % 2 << " ";
		cout << endl;
	}
}

int main(){
	srand(time(0));
	cout << "Enter n: ";
	int n = 0;
	cin >> n;

	printMatrix(n);

	return 0;
}
