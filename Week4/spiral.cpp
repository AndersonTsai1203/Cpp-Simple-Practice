#include <iostream>

using namespace std;

int main()
{
    // assume that the given size is odd and greater than or equal to 5
    int size;
    cout << "Enter size: ";
    cin >> size;
    int row = 0;
    while (row < size)
    {
        int col = 0;
        while (col < size)
        {   
            if ((row % 2 == 0) && (col >= row - 1) && (col <= size - row - 1))
            {
                // going right
                cout << "*";
            }
            else if ((col % 2 == 0) && (row <= col) && (row >= size - col))
            {
                // going down
                cout << "*";
            }
            else if ((row % 2 == 0) && (col <= row) && (col >= size - row - 1))
            {
                // going left
                cout << "*";
            }
            else if ((col % 2 == 0) && (row >= col + 2) && (row < size - col - 1))
            {
                // going up
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