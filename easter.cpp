#include <iostream>

using namespace std;

// The formula of calculating the Easter date in each year is referred to https://www.drupal.org/node/1180480
int main()
{
    int year;
    int month;
    int date;
    cout << "Enter year: ";
    cin >> year;
    int a = year % 19;
    int b = year / 100;
    int c = year % 100;
    int d = b / 4;
    int e = b % 4;
    int f = (b + 8) / 25;
    int g = (b - f + 1) / 3;
    int h = (19 * a + b - d - g + 15) % 30;
    int i = c / 4;
    int k = c % 4;
    int l = (32 + 2 * e + 2 * i - h - k) % 7;
    int m = (a + 11 * h + 22 * l) / 451;
    month = (h + l - 7 * m + 114) / 31;
    int p = (h + l - 7 * m + 114) % 31;
    date = p + 1;

    cout << "Easter is ";
    if (month == 1)
    {
        cout << "January";
    }
    else if (month == 2)
    {
        cout << "February";
    }
    else if (month == 3)
    {
        cout << "March";
    }
    else if (month == 4)
    {
        cout << "April";
    }
    else if (month == 5)
    {
        cout << "May";
    }
    else if (month == 6)
    {
        cout << "June";
    }
    else if (month == 7)
    {
        cout << "July";
    }
    else if (month == 8)
    {
        cout << "August";
    }
    else if (month == 9)
    {
        cout << "September";
    }
    else if (month == 10)
    {
        cout << "October";
    }
    else if (month == 11)
    {
        cout << "November";
    }
    else if (month == 12)
    {
        cout << "December";
    }
    cout << " " << date << " in " << year << endl;

    return 0;
}