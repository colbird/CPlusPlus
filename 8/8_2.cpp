#include <iostream>
using namespace std;

int main(){
    const int NUMBER_OF_STUBENTS = 8;
    const int NUMBER_OF_QUESTIONS = 10;

    // Student's answers to the questions
    char answers[NUMBER_OF_STUBENTS][NUMBER_OF_QUESTIONS] =
    {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'A', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}
    };

    // Key to the questions
    char keys[] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    // Grade all answers
    for (int i = 0; i < NUMBER_OF_STUBENTS; i++){
        // Grade all student
        int correctCount = 0;
        for (int j = 0; j < NUMBER_OF_QUESTIONS; j++){
            if (answers[i][j] == keys[j])
                correctCount++;
        }
        cout << "Student " << i << " 's corrent count is " <<
        correctCount << endl;
    }
    return 0;
}
