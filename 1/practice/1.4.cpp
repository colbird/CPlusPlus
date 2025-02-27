#include <iostream>
using namespace std;

int main(){
	int i = 1;
	cout << "a\ta^2\ta^3" << endl;
	while(i < 5){
		cout << i << "\t" << i * i << "\t" << i * i * i << "\t" << endl;
		i = i + 1;
	}
	return 0;
}
