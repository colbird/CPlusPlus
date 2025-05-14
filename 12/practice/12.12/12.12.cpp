#include <iostream>
#include <vector>
using namespace std;

bool onTheSameLine(vector<vector<double>> point, int numberOfpoint = 5){
    for (int i = 2; i < numberOfpoint; i++){
        if((point[1][0] - point[0][0])*(point[i][1]-point[0][1])-(point[i][0]-point[0][0])*(point[1][0]-point[0][0]))
        return false;
    }
    return true;
}

int main(){
    vector<vector<double>> point(5);
    for (int i = 0; i < 5; i++)
        point[i] = vector<double>(2);

    for (int i = 0; i < 5; i++){
        cin >> point[i][0];
        cin >> point[i][1];
    }

    cout << onTheSameLine(point) << endl;
    
    return 0;
}
