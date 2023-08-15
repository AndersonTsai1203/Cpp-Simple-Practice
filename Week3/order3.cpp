#include <iostream>

using namespace std;

int main()
{
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

    if (num1 > num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    if (num1 > num3)
    {
        temp = num3;
        num3 = num1;
        num1 = temp;
    }

    if (num2 > num3)
    {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }

    cout << "The integers in order are: " << num1 << " " << num2 << " " << num3 << endl;
    
    /*if (((num1 <= num2) && (num2 <= num3)) || ((num1 < num2) && (num2 < num3) && (num1 < num3)))
    {
        cout << "The integers in order are: " << num1 << " " << num2 << " " << num3 << endl;
    }
    else if (((num1 <= num3) && (num3 <= num2)) || ((num1 < num3) && (num3 < num2) && (num1 < num2)))
    {
        cout << "The integers in order are: " << num1 << " " << num3 << " " << num2 << endl;
    }
    else if (((num2 <= num1) && (num1 <= num3)) || ((num2 < num1) && (num1 < num3) && (num2 < num3)))
    {
        cout << "The integers in order are: " << num2 << " " << num1 << " " << num3 << endl;
    }
    else if (((num2 <= num3) && (num3 <= num1)) || ((num2 < num3) && (num3 < num1) && (num2 < num1)))
    {
        cout << "The integers in order are: " << num2 << " " << num3 << " " << num1 << endl;
    }
    else if (((num3 <= num1) && (num1 <= num2)) || ((num3 < num1) && (num1 < num2) && (num3 < num2)))
    {
        cout << "The integers in order are: " << num3 << " " << num1 << " " << num2 << endl;
    }
    else if (((num3 <= num2) && (num2 <= num1)) || ((num3 < num2) && (num2 < num1) && (num3 < num1)))
    {
        cout << "The integers in order are: " << num3 << " " << num2 << " " << num1 << endl;
    }*/
    
    return 0;
}