#include <iostream>
using namespace std;

int main()
{
    long long A, B,temp,gcdValue,lcmValue;
    cin >> A >> B;

    long long originalA = A, originalB = B;

    while (B != 0)
    {
        temp = B;
        B = A % B;
        A = temp;
    }

    gcdValue = A;
    lcmValue = (originalA / gcdValue) * originalB;

    cout << gcdValue << " " << lcmValue << endl;

    return 0;
}
