//improved versionn of circumference.cpp
#include <iostream>
#define PI 3.14159
using namespace std;
int main ()
{
    double r; // radius
    cout << "Enter the radius of the circle: ";
    cin >> r;
    double circumference = 2 * PI * r; // calculate circumference
    cout << "Circumference of circle with radius " << r << " is: " << circumference << endl;
    return 0;
}