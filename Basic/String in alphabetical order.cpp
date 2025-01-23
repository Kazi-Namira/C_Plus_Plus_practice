#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Convert the entire string to uppercase for case-insensitive sorting
    transform(inputString.begin(), inputString.end(), inputString.begin(), ::toupper);

    // Sort the string in alphabetical order
    sort(inputString.begin(), inputString.end());

    cout << "Alphabetical order: " << inputString << endl;

    return 0;
}

