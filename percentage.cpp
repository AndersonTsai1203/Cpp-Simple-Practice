#include <iostream>

using namespace std;

int main()
{
    // assume the first integer is always greater than or equal to the second integer
    int total;
    int award;
    int division;
    int remainder;
    int percent;

    cout << "Enter the total number of marks in the exam: ";
    cin >> total;
    cout << "Enter the number of marks the student was awarded: ";
    cin >> award;

    division = award * 100 / total;
    remainder = award * 100 % total;
    
    if (remainder > total / 2)
    {
        percent = division + 1;
    }
    else
    {
        percent = division;
    }
    cout << "The student scored " << percent << "\% in the exam." << endl;
    return 0;
}