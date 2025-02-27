#include <iostream>
using namespace std;

int main(){
	int i = 1;
	int sum = 0;		// 1~9 总和
	while (i < 10)
		sum += i++;
	cout << "1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 = " << sum << endl;
	return 0;
}
