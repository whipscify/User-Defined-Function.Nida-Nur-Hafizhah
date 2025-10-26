#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2);
double radius(double x1, double y1, double x2, double y2);
double circumference(double r);
double area(double r);

// Function to calculate distance between two points
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double radius(double x1, double y1, double x2, double y2)
{
    return distance(x1, y1, x2, y2);
}

double circumference(double r)
{
    const double PHI = 3.14159265358979323846;
    return 2 * PHI * r;
}

double area(double r)
{
    const double PHI = 3.14159265358979323846;
    return PHI * pow(r, 2);
}

int main()
{
    double xCenter, yCenter, xPoint, yPoint;
    double r, d, c, a;

    // Input center and point coordinates
    cout << "Enter center coordinates (x1 y1): ";
    cin >> xCenter >> yCenter;
    cout << "Enter point on circle (x2 y2): ";
    cin >> xPoint >> yPoint;

    r = distance(xCenter, yCenter, xPoint, yPoint);
    d = 2 * r;
    c = circumference(r);
    a = area(r);

    // Display the Circle Properties
    cout << "\n== Circle Properties ==" << endl;
    cout << "Radius: " << r << endl;
    cout << "Diameter: " << d << endl;
    cout << "Circumference: " << c << endl;
    cout << "Area: " << a << endl;

    return 0;
}
