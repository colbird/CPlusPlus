#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));		// 初始随机数种子

	bool coinStatus = rand() % 2;

	// 输入硬币是正还是反(正 0 反 1)
	cout << "请猜硬币的正反(正 0 反 1): ";
	bool GuessStatus;
	cin >> GuessStatus;

	if (GuessStatus == coinStatus)
		cout << "恭喜你猜对了" << endl;
	else
		cout << "很遗憾猜错了" << endl;

	return 0;
}
