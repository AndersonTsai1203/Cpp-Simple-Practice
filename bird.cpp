#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"  ___", " ('v')", "((___))", " ^   ^"};

    for (const string& word : msg)
    {
        cout << word << "\n";
    }
    cout << endl; // printing a new line

    return 0;
}