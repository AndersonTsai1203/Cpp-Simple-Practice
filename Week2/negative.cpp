#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0)
    {
        cout << "You have enetered zero.\n";
    }
    else if (num > 0)
    {
        cout << "You have entered a positive number.\n";
    }
    else
    {
        cout << "Don't be so negative!\n";
    }
    return 0;
}