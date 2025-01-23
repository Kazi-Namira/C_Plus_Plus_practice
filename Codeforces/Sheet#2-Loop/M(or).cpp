#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;

    bool foundLucky = false;
    for (int i = N; i <= M; i++)
    {
        int num = i;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                break;
            }
            num /= 10;
        }
        if (num == 0)
        {
            cout << i << " ";
            foundLucky = true;
        }
    }
    if (!foundLucky)
    {
        cout << -1;
    }
    cout << endl;
    return 0;
}
