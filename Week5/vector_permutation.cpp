#include <iostream>

using namespace std;

int main()
{
    int length;
    cout << "Enter vector length: ";
    cin >> length;

    int vector[length];
    cout << "Enter vector: ";
    for (int i = 0; i < length; i++)
    {
        cin >> vector[i];
    }

    int permutation[length];
    cout << "Enter permutation: ";
    for (int j = 0; j < length; j++)
    {
        cin >> permutation[j];
    }

    return 0;
}