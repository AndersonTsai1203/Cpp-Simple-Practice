#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Please enter an integer: ";
    cin >> num;
    if (num >= 1 && num <= 5)
    {
        cout << "You entered ";
        switch (num)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        default:
            break;
        }
        cout << ".\n";
    }
    else if (num < 1)
    {
        cout << "You entered a number less than one.\n";
    }
    else
    {
        cout << "You entered a number greater than five.\n";
    }
    return 0;
}