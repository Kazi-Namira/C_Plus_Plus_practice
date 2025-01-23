#include <iostream>
using namespace std;

inline double celToFahren(double celsius)
{
    return (celsius * 9/5) + 32;
}

int main()
{
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << celToFahren(celsius) << endl;
    return 0;
}
