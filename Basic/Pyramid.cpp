#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int rows = 10;
    for (int i = 0; i < rows; ++i)
    {
        int num = i + 1;
        int count = 0;

        cout << setw((rows - i - 1) * 2) << " ";

        for (int j = 0; j <= i; ++j)
        {
            cout << num << " ";
            num = (num + 1) % 10;
            count++;
        }

        for (int j = count - 2; j >= 0; --j)
        {
            cout << num;
            if (j != 0)
            {
                cout << " ";
            }
            num = (num + 9) % 10;
        }

        cout << endl;
    }
    return 0;
}
