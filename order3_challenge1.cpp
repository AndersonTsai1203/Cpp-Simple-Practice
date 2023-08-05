#include <iostream>

using namespace std;

int main()
{
    // ordering three integers without if statement
    int num1;
    int num2;
    int num3;
    int temp;
    cout << "Enter integer: ";
    cin >> num1;
    cout << "Enter integer: ";
    cin >> num2;
    cout << "Enter integer: ";
    cin >> num3;

    temp = num2;
    num2 = num1 - (1 - (num1 > num2)) * (num1 - num2);
    num1 = num1 - (1 - (num1 < temp)) * (num1 - temp);

    temp = num3;
    num3 = num1 - (1 - (num1 > num3)) * (num1 - num3);
    num1 = num1 - (1 - (num1 < temp)) * (num1 - temp);

    temp = num3;
    num3 = num2 - (1 - (num2 > num3)) * (num2- num3);
    num2 = num2 - (1 - (num2 < temp)) * (num2 - temp);

    cout << "The integers in order are: " << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}