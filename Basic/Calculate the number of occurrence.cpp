#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int l = str.length();

    for (int i = 0; i < l; i++)
    {
        int cnt = 1;  // Reset the count for each character
        if (str[i] == ' ')  // Skip counting spaces
            continue;

        for (int j = i + 1; j < l; j++)
        {
            if (str[i] == str[j])
            {
                cnt++;
                str[j] = ' ';  // Mark the counted character as ' ' to avoid recounting
            }
        }
        cout << str[i]<<" = "<< cnt << endl;
    }
    return 0;
}

