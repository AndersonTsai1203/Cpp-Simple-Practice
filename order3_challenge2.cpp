#include <iostream>

using namespace std;

int main()
{
    // ordering three integers without if statments and with only 3 variables
    int num1;
    int num2;
    int num3;
    cout << "Enter integer: ";
    cin >> num1;
    cout << "Enter integer: ";
    cin >> num2;
    cout << "Enter integer: ";
    cin >> num3;

    cout << "The integers in order are: ";
    cout << (num1 - (1 - (num1 < (num2 - (1 - (num2 < num3)) * (num2 - num3)))) * (num1 - (num2 - (1 - (num2 < num3)) * (num2 - num3))));
    cout << " ";
    cout << ((num1 - (1 - (num1 < num2)) * (num1 - num2)) - (1 - ((num1 - (1 - (num1 < num2)) * (num1 - num2)) > (num3 - (1 - (num3 < (num1 - (1 - (num1 > num2)) * (num1 - num2)))) * (num3 - (num1 - (1 - (num1 > num2)) * (num1 - num2)))))) * ((num1 - (1 - (num1 < num2)) * (num1 - num2)) - (num3 - (1 - (num3 < (num1 - (1 - (num1 > num2)) * (num1 - num2)))) * (num3 - (num1 - (1 - (num1 > num2)) * (num1 - num2))))));
    cout << " ";
    cout << (num1 - (1 - (num1 > (num2 - (1 - (num2 > num3)) * (num2 - num3)))) * (num1 - (num2 - (1 - (num2 > num3)) * (num2 - num3))));
    cout << endl;

    return 0;
}