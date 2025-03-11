#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	// 共52张牌
	int card = rand() % 52;
	// 牌的排号
	int rank = card / 4;
	// 牌的花色
	int suit = card % 4;

	// 打印
	cout << "The card you picked is ";
	switch (rank){
		case 0: cout << "Ace of "; break;
		case 1: cout << "2 of "; break;
		case 2: cout << "3 of "; break;
		case 3: cout << "4 of "; break;
		case 4: cout << "5 of "; break;
		case 5: cout << "6 of "; break;
		case 6: cout << "7 of "; break;
		case 7: cout << "8 of "; break;
		case 8: cout << "9 of "; break;
		case 9: cout << "10 of "; break;
		case 10: cout << "Jack of "; break;
		case 11: cout << "Queen of "; break;
		case 12: cout << "King of "; break;
	}
	switch (suit){
		case 0: cout << "Clubs" << endl; break;
		case 1: cout << "Diamonds" << endl; break;
		case 2: cout << "Heart" << endl; break;
		case 3: cout << "Spades" << endl; break;
	}

	return 0;
}
