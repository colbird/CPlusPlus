#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Converts a hex number as a string to decimal
int hex2Dec(const string& hex);

// Converts a hex character to a decimal value
int hexCharToDecimal(char ch);

int main(){
    // Prompt the user to enter a hex number as a string
    cout << "Enter a hex number: ";
    string hex;
    cin >> hex;

    cout << "The decimal value for hex number " << hex
    << " is " << hex2Dec(hex) << endl;

    return 0;
}

int hex2Dec(const string& hex){
    int decimalvalue = 0;
    for (unsigned i = 0; i < hex.size(); i++)
        decimalvalue = decimalvalue * 16 + hexCharToDecimal(hex[i]);
    
    return decimalvalue;
}

int hexCharToDecimal(char ch){
    ch = toupper(ch);
    if(ch >= 'A' && ch <= 'f')
        return 10 + ch - 'A';
    else
        return ch - '0';
}
