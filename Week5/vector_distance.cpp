#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int length;
    cout << "Enter vector length: ";
    cin >> length;

    int vector1[length];
    cout << "Enter vector 1: ";
    for (int i = 0; i < length; i++)
    {
        cin >> vector1[i];
    }

    int vector2[length];
    cout << "Enter vector 2: ";
    for (int j = 0; j < length; j++)
    {
        cin >> vector2[j];
    }

    double distance = 0;
    for (int k = 0; k < length; k++)
    {
        distance = distance + pow((vector1[k] - vector2[k]), 2);
    }
    
    cout << "Euclidean distance = " << sqrt(distance) << endl;
    return 0;
}