#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Element Frequency" << endl;

    for (int i = 0; i < n; i++)
    {
        int count = 1; // Start counting this element

        // Check for duplicates
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                count = 0; // If a duplicate is found, ignore it
                break; // Exit the inner loop
            }
        }

        // If it's not a duplicate, count how many times it appears
        if (count != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++; // Increment count for duplicates
                }
            }
            cout << arr[i] << " " << count << endl; // Output the element and its frequency
        }
    }

    return 0;
}
