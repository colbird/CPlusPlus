#include <iostream>
#include "StackOfintegers.h"
using namespace std;

int main(){
	StackOfintegers Stack;
	for (int i = 2; i < 120; i++){
		int j;
		for (j = 2; j < i; j++){
			if (i % j == 0)
				break;
		}
		if (i == j){
			Stack.push(i);
		}
	}
	while(!Stack.isEmpty())
		cout << Stack.pop() << endl;
	return 0;
}
