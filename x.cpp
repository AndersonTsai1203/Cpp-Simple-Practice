#include <iostream>

using namespace std;

int main()
{
    //assume the size is odd and greater than or equal to 5
    int size;
    cout << "Enter size: ";
    cin >> size;

    int row = 0;
    while (row < size)
    {
        int col = 0;
        while (col < size)
        {
            if ((col == row) || (col + row == size - 1))
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}