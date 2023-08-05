#include <iostream>

using namespace std;

int main()
{
    int num;
    int counter = 1;
    int sum = 0;

    cout << "Enter number: ";
    cin >> num;
    cout << "The factor of " << num << " are: " << endl;

    while (counter <= num)
    {
        if (num % counter == 0)
        {
            cout << counter << endl;
            sum = sum + counter;
        }
        counter++;
    }

    cout << "Sum of factors = " << sum << endl;

    if (sum - num == num)
    {
        cout << num << " is a perfect number" << endl;
    }
    else{
        cout << num << " is not a perfect number" << endl;
    }
    return 0;
}