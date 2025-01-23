#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long N;
    cin >> N;

    vector<pair<long long, int>> factors;

    for (long long i = 2; i <= N; ++i)
    {
        if (N % i == 0)
        {
            int count = 0;
            while (N % i == 0)
            {
                N /= i;
                count++;
            }
            factors.push_back({i, count});
        }
    }

    cout << "(";
    for (size_t i = 0; i < factors.size(); ++i)
    {
        cout << factors[i].first << "^" << factors[i].second;
        if (i != factors.size() - 1)
        {
            cout << ")*(";
        }
    }
    cout << ")" << endl;

    return 0;
}

