#include <iostream>
using namespace std;

int main()
{
    string s = "Namira";
    int n = s.length();

    // Generate all substrings
    for (int i = 0; i < n; i++)    // Starting index
    {
        for (int len = 1; len <= n - i; len++)    // Length of substring
        {
            cout << s.substr(i, len) << endl;
        }
    }

    return 0;
}
