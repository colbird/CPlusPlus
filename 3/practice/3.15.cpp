#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 游戏: 剪刀、石头、布
// 剪刀 0
// 石头 1
// 布 	2

int main(){
	srand(time(0));

	int computer = rand() % 3;

	cout << "剪刀(0)、石头(1)、布(2): ";
	int you;
	cin >> you;
	if (you < 0 && you > 2){
		cout << "输入范围 0~2" << endl;
		return 0;
	}

	cout << "电脑出的是" << (!computer ? "剪刀" : (computer == 1 ? "石头" : "布")) << ". "
	<< "你出的是" << (!you ? "剪刀" : (you == 1 ? "石头" : "布"));
	
	switch(computer){
		case 0: cout << (you == 1 ? "你赢了" : "你输了") << endl; break;
		case 1: cout << (you == 2 ? "你赢了" : "你输了") << endl; break;
		case 2: cout << (you == 0 ? "你赢了" : "你输了") << endl; break;
	}
	if (computer == you)
		cout << "平局" << endl;

	return 0;
}
