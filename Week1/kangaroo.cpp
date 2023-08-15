#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"  /\\   ___", " <__\\_/    \\", "    \\_  /  _\\", "      \\_\\ / \\\\", "        //   \\\\", "      =//     \\\\=="};

    for (const string& word : msg)
    {
        cout << word << "\n";
    }
    return 0;
}