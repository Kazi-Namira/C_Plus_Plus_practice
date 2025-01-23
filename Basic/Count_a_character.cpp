#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello, World!";
    char target = 'o';  //character want to count
    int count = 0;

    for (char ch : str)
    {
        if (ch == target)
        {
            count++;
        }
    }
    cout << "The character '" << target << "' appears " << count << " times." << endl;
    return 0;
}

