#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Compute the distance between two points (x1, y1) and (x2, y2)
double getDistance(double x1, double y1, double x2, double y2){
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(){
    int number_Of_Points;
    cin >> number_Of_Points;

    // Each row in points represents a point
    vector<vector<double>> points(number_Of_Points);

    for (int i = 0; i < number_Of_Points; i++)
        points[i] = vector<double>(2);

    cout << "Enter " << number_Of_Points << " point: ";
    for (int i = 0; i < number_Of_Points; i++)
        cin >> points[i][0] >> points[i][1];

    // p1 and p2 are the indices in the points array
    int p1 = 0, p2 = 1; // Initial two points
    double shortestDistance = getDistance(points[p1][0], points[p1][1],
    points[p2][0], points[p2][1]);  // Initialize shortestDistance

    // Compute distance for every two points
    for (int i = 0; i < number_Of_Points; i++){
        for (int j = i + 1; j < number_Of_Points; j++){
            double distance = getDistance(points[i][0], points[i][1],
            points[j][0], points[j][1]);  // Find distance

            if (shortestDistance > distance){
                p1 = i; // Update p1
                p2 = j; // Update p2
                shortestDistance = distance; // Update shortestDistance
            }
        }
    }

    // Display result
    cout << "The closest two points are " <<
    "(" << points[p1][0] << ", " << points[p1][1] << ") and (" <<
    points[p2][0] << ", " << points[p2][1] << ")" << endl;

    return 0;
}
