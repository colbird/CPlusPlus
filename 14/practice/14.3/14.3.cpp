#include <iostream>
#include "Circle.h"
using namespace std;


int main(){
    Circle cir[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 5; j++){
            if (cir[i] < cir[j]){
                double temp = cir[i].getRadius();
                cir[i].setRadius(cir[j].getRadius());
                cir[j].setRadius(temp);
            }
        }
    }

    for (int i = 0; i < 5; i++)
        cout << cir[i].getRadius() << endl;
    return 0;
}
