#include <iostream>
#include <iomanip>
using namespace std;

bool leftOfTheline(double x1 ,double y1 ,double x2 ,double y2 ,double x3 ,double y3){
    return (x2 - x1)*(x3 - x1)-(y3 - y1)*(y2 - y1) < 0;
}

bool onTheSameLine(double x1 ,double y1 ,double x2 ,double y2 ,double x3 ,double y3){
    return (x2 - x1)*(x3 - x1)-(y3 - y1)*(y2 - y1) == 0;
}

bool onTheLineSegment(double x1 ,double y1 ,double x2 ,double y2 ,double x3 ,double y3){
    return ((x3 < x1 && x3 > x2)&&(y3 < y1 && y3 > y2))
        ||((x3 > x1 && x3 < x2)&&(y3 > y1 && y3 < y2));
}

int main(){
    cout << "Entet three points for p0, p1, and p2: ";
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << setprecision(1) << fixed;
    if(onTheSameLine(x1, y1, x2, y2, x3, y3)){
        if (!onTheLineSegment(x1, y1, x2, y2, x3, y3))
            cout << "(" << x3 << ", " << y3 << ")"
                << " is on the same line from "
                << "(" << x1 << ", " << y1 << ") ot "
                << "(" << x2 << ", " << y2 << ")" << endl;
        else
            cout << "(" << x3 << ", " << y3 << ")"
                << " is on the line segment from "
                << "(" << x1 << ", " << y1 << ") ot "
                << "(" << x2 << ", " << y2 << ")" << endl;
    }
    else{
        cout << "(" << x3 << ", " << y3 << ")"
            << " is on the ";

        if (leftOfTheline(x1, y1, x2, y2, x3, y3))
            cout << "left";
        else
            cout << "right";
        
        cout << " side of the line from "
        << "(" << x1 << ", " << y1 << ") ot "
        << "(" << x2 << ", " << y2 << ")" << endl;
    }
    
    return 0;
}
