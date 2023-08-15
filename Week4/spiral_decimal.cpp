#include <iostream>

using namespace std;

//The direction of the current line being printed (to be explained below)
#define DIR_NONE 0
#define DIR_LEFT 1
#define DIR_RIGHT 2
#define DIR_UP 3
#define DIR_DOWN 4

//A key part of this implementation is splitting the numbers into lines
//These are the straight lines of numbers, with the first number coming from the line before
//There are 4 cases to deal with each line based on which direction it would go when spiraling inwards
//(For the example below 'r' is for lines going right, 'd' for lines going down, 'u' for lines going up and 'l' for lines going left)
//eg.
// rrrrr
// ----d
// urr-d
// u---d
// lllld

int main()
{
    // assume the given size if odd and greater than or equal to 5
    int size;
    cout << "Enter size: ";
    cin >> size;

    // These are the sizes of the original lines, the right line starts
    // longer than the others since it doesn't have another direction that takes its first number
    // The up line starts shorter than the others since every time it gets to the upwards line the line
    // gets smaller
    int original_right_size = size + 1;
    int original_down_size = size - 1;
    int original_left_size = size - 1;
    int original_up_size = size - 3;
    
    // Determine the total number of numbers to write (so that it can count down)
    // This is done by simulating each side
    int stars = 0;
    int right_size = original_right_size;
    int down_size = original_down_size;
    int left_size = original_left_size;
    int up_size = original_up_size;

    while (right_size > 0)
    {
        stars = stars + right_size;
        right_size = right_size - 4; // Every go off the spiral, each side shrinks by 4
    }
    while (down_size > 0)
    {
        stars = stars + down_size;
        down_size = down_size - 4;
    }
    while (left_size > 0)
    {
        stars = stars + left_size;
        left_size = left_size - 4;
    }
    while (up_size > 0)
    {
        stars = stars + up_size;
        up_size = up_size - 4;
    }

    int row = 0;
    while (row < size)
    {

        int col = 0;
        while (col < size)
        {   
            int line_dir = DIR_NONE; //The direction the line's going (or none if a dash should be printed)
            int offset = 0; // The number along the line this position is
            int line_num = 0; // The number of line changes in the spiral before this line
            if ((row <= size / 2) && (row % 2 == 0) && (col >= row - 1) && (col <= size - row - 1))
            {
                // going right
                line_dir = DIR_RIGHT;
                offset = col - row + 2;
                line_num = row / 2 * 4;
            }
            else if ((col > size / 2) && (col % 2 == 0) && (row <= col) && (row >= size - col))
            {
                // going down
                line_dir = DIR_DOWN;
                offset = row - size + col + 1;
                line_num = (size - col - 1) / 2 * 4 + 1;
            }
            else if ((row > size / 2) && (row % 2 == 0) && (col <= row) && (col >= size - row - 1))
            {
                // going left
                line_dir = DIR_LEFT;
                offset = row - col;
                line_num = (size - row - 1) / 2 * 4 + 2;
            }
            else if ((col <= size / 2) && (col % 2 == 0) && (row >= col + 2) && (row < size - col - 1))
            {
                // going up
                line_dir = DIR_UP;
                offset = size - col - 1 - row;
                line_num = col / 2 * 4 + 3;
            }

            if (line_dir != DIR_NONE)
            {
                // Reset the number of stars in the first line of each type
                // For calculating the number to print out
                right_size = original_right_size;
                down_size = original_down_size;
                left_size = original_left_size;
                up_size = original_up_size;

                int num_so_far = 0; //The total numbers that have been printed so far in the spiral
                int i = 0;
                while (i < line_num)
                {
                    // Similar to calculating total number of numbers printed in the whole spiral
                    // but in this case only go up to the current line
                    if (i % 4 == 0) 
                    { 
                        // rightwards line
                        num_so_far = num_so_far + right_size;
                        right_size = right_size - 4;
                    }
                    else if (i % 4 == 1) 
                    { 
                        // downwards line
                        num_so_far = num_so_far + down_size;
                        down_size = down_size - 4;
                    } 
                    else if (i % 4 == 2) 
                    { 
                        // leftwards line
                        num_so_far = num_so_far + left_size;
                        left_size = left_size - 4;
                    } 
                    else
                    { 
                        // i % 4 == 3, upwards line
                        num_so_far = num_so_far + up_size;
                        up_size = up_size - 4;
                    }
                    i++;
                }

                num_so_far = num_so_far + offset; // Include the amount printed in the current line

                int num_to_print = stars - num_so_far; // Subtract num_so_far from total_stars as the spiral should be counting down as it goes inwards
                cout << (num_to_print % 10); // Only take last digit of what to print
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