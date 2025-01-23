#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[100],n;

    cout<<"Enter the size,n : ";
    cin>>n;

    vector<int> pre_sum(n);  // Use a vector to handle dynamic array size

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    pre_sum[0] = a[0];  // Initialize the first element of prefix sum

    // Calculate the prefix sum array
    for (int i = 1; i < n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + a[i];
    }

    // Print the prefix sum array
    for (int i = 0; i < n; i++)
    {
        cout << pre_sum[i] << " ";
    }
    cout << endl;  // Add a new line at the end
    return 0;
}
