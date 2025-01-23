#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Get the entire line, including spaces

    int n = str.length();
    bool isPalindrome = true; // Flag to track if the string is a palindrome

    // Check characters from the start and end
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            isPalindrome = false; // Set flag to false if mismatch found
            break;
        }
    }

    // Output result
    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}

