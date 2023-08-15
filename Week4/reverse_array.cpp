#include <iostream>

using namespace std;

#define MAX_NUMBER 100

int main()
{
    int num;
    int i = 0;
    int array[100];
    int flag;
    
    cout << "Enter numbers forwards: " << endl;
    while ((cin >> num))
    {
        array[i] = num;
        flag = 1;
        i++;
    }

    cout << "Reversed: " << endl;
    int j = i - 1;
    while (j >= 0 && flag == 1)
    {
        cout << array[j] << endl;
        j--;
    }

    return 0;
}