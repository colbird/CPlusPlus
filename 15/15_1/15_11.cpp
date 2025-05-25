#include <iostream>
#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"

using namespace std;

void displayGeometericObject(const GeometricObject g){
    cout << g.toString() << endl;
}

int main(){
    GeometricObject geometricObject;
    displayGeometericObject(geometricObject);
    Circle circle(5);
    displayGeometericObject(circle);
    Rectangle rectangle(4, 6);
    displayGeometericObject(rectangle);

    return 0;
}
