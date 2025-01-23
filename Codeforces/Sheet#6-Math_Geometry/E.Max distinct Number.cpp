#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long sum = 0;
    long long count = 0;
    for (long long i = 1; sum + i <= N; i++)
    {
        sum += i;
        count++;
    }
    cout << count << endl;

    return 0;
}

