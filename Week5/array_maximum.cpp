#include <iostream>

using namespace std;

#define MAX_SIZE 100

int array_maximum (int size, int (*array))
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    int size1 = 7;
    int array1[MAX_SIZE] = {3, 14, 15, 9, 2, 6, 5};

    cout << "The largest value from array1 is: " << array_maximum(size1, array1) << endl;

    int size2 = 10;
    int array2[MAX_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    cout << "The largest value from array2 is: " << array_maximum(size2, array2) << endl;

    return 0;
}