#include <iostream>

using namespace std;

int main()
{
    // assume that boxes will not exceed 50
    int boxes;
    int size;
    cout << "How many boxes: ";
    cin >> boxes;
    
    size = 4 * boxes - 1;
    int row = 0;
    while (row < size)
    {
        int col = 0;
        while (col < size)
        {
            int rowInverse = size - 1 - row;
            int colInverse = size - 1 - col;
            
            if ((col == row) || (col == rowInverse))
            {
                // on diagonals
                if (col % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            else if ((row > col) && (row < colInverse) && (col % 2 == 0))
            {
                // left side
                cout << "1";
            }
            else if ((row < col) && (row > colInverse) && (col % 2 == 0))
            {
                // right side
                cout << "1";
            }
            else if ((col > row) && (col < rowInverse) && (row % 2 == 0))
            {
                // top side
                cout << "1";
            }
            else if ((col < row) && (col > rowInverse) && (row % 2 == 0))
            {
                // down side
                cout << "1";
            }
            else
            {
                cout << "0";
            }
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}