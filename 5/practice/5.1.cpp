#include <iostream>
using namespace std;


int main(){
    int total = 0;              // 总和
    int numberOfPositives = 0;  // 正整数
    int numberOfNegatives = 0;  // 负整数
    double average = 0;         // 平均值
    int count = 0;              // 统计输入的整数个数

    cout << "Enter an integer, the input ends if it is 0: ";
    
    int number = -1;

    do{
        // 输入整数
        cin >> number;
        
        if (number)     // 统计正负数
            number > 0 ? numberOfPositives++ : numberOfNegatives++;
        else 
            break;

        total += number;    // 总和

        count++;
    }while(true);

    average = static_cast<double>(total) / count;

    // 打印
    cout << "The number of positives is " << numberOfPositives << endl;
    cout << "The number of negatives is " << numberOfNegatives << endl;
    cout << "The total is " << total << endl;
    cout << "The average is " << average << endl;
    return 0;
}
