#include <iostream>

using namespace std;

int main()
{
    int num_side;
    int num_dice;
    int min_range;
    int max_range;
    float sum_min_max_range;
    float average;
    cout << "Enter the number of sides of your dice: ";
    cin >> num_side;
    cout << "Enter the number of dice being rolled: ";
    cin >> num_dice;

    if (num_side < 6 || num_dice <= 0)
    {
        cout << "These dice will not produce a range.\n";
    }
    else 
    {
        if (num_dice < num_side)
        {
            min_range = num_dice;
        }
        else
        {
            min_range = num_side;
        }
        
        max_range = num_side * num_dice;
        cout << "Your dice range is " << min_range << " to " << max_range << endl;
        
        sum_min_max_range = min_range + max_range;
        average =  sum_min_max_range / 2;
        cout << "The average value is " << average << endl;
    }
    return 0;
}
