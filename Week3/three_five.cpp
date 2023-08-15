#include <iostream>

using namespace std;

int main()
{
    int num;
    int counter = 1;
    cout << "Enter number: ";
    cin >> num;

    while (counter < num)
    {
        if ((counter % 3 == 0) || (counter % 5 == 0))
        {
            cout << counter << endl;
        }
        counter++;
    }
    return 0;
}