#include <iostream>
#include <string>
using namespace std;

// M: Mathematics
// C: Computer Science
// I: Information Technology

int main(){
	// 输入
	cout << "Enter two characters: ";
	string str;
	cin >> str;

	if (str.at(0) != 'M' && str.at(0) != 'C' && str.at(0) != 'I'){
		cout << "Invalid major code" << endl;
		return 1;
	}
	if (str.at(1) < '1' || str.at(1) > '4'){
		cout << "Invalid status code" << endl;
		return 1;
	}
	switch(str.at(1) - '0'){
		case 1: cout << (str.at(0) == 'M' ? "Mathematics" 
			      : (str.at(0) == 'C' ? "Computer Science" : "Information Technology"))
			<< " Freshman" << endl; break;
		case 2: cout << (str.at(0) == 'M' ? "Mathematics"
			      : (str.at(0) == 'C' ? "Computer Science" : "Information Technology"))
			<< " Sophomore" << endl; break;
		case 3: cout << (str.at(0) == 'M' ? "Mathematics"
			      : (str.at(0) == 'C' ? "Computer Science" : "Information Technology"))
			<< " Junior" << endl; break;
		case 4: cout << (str.at(0) == 'M' ? "Mathematics"
			      : (str.at(0) == 'C' ? "Computer Science" : "Information Technology"))
			<< " Senior" << endl; break;
	}
	return 0;
}
