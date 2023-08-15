#include <iostream>
#include <math.h>

using namespace std;

double area (double radius)
{

    return M_PI * radius * radius;
}

double circumference (double radius)
{
    return 2 * M_PI * radius;
}

double diameter (double radius)
{
    return 2 * radius;
}

int main()
{
    double radius;
    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Area           = " << area(radius) << endl;
    cout << "Circumference  = " << circumference(radius) << endl;
    cout << "Diameter       = " << diameter(radius) << endl;
    return 0;
}