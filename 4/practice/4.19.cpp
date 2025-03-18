#include <iostream>
#include <string>
using namespace std;

int main(){
	// 输入
	cout << "Enter the first city: ";
	string firstCity;
	getline(cin, firstCity);

	cout << "Enter the second city: ";
	string secondCity;
	getline(cin, secondCity);

	cout << "Enter the third city: ";
	string thirdCity;
	getline(cin, thirdCity);

	// 输出
	cout << "The three cities in alphabeitcal order are ";
	{
		string temp;
		if (secondCity > thirdCity){
			temp = secondCity;
			secondCity = thirdCity;
			thirdCity = temp;
		}
		if (firstCity > secondCity){
			temp = secondCity;
			secondCity = firstCity;
			firstCity = temp;
		}
		if (firstCity > thirdCity){
			temp = thirdCity;
			thirdCity = firstCity;
			firstCity = temp;
		}
	}
	cout << firstCity << " " << secondCity << " " << thirdCity << endl;

	return 0;
}
