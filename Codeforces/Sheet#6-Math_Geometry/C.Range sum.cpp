#include <iostream>
using namespace std;

int main()
{
    long long A, B, sumAll = 0, sumEven = 0, sumOdd = 0;
    cin >> A >> B;
    if (A > B)
    {
        swap(A, B);
    }
    for (long long i = A; i <= B; ++i)
    {
        sumAll += i;

        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }
    cout << sumAll << endl;
    cout << sumEven << endl;
    cout << sumOdd << endl;

    return 0;
}
