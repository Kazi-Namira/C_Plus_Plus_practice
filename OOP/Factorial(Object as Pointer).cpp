#include <iostream>
using namespace std;

class Factorial
{
private:
    int fact;
public:

    void getfact(int f)
    {
        fact = f;
    }

    int calculate()
    {
        int result = 1;

        for (int i = 1; i <= fact; ++i)
        {
            result *= i;
        }
        cout << "Factorial of " << fact << " is: " << result << endl;
    }
};

int main()
{
    Factorial* ptr = new Factorial();
    int p;
    cout << "Enter a non-negative integer: ";
    cin >> p;
    ptr->getfact(p);
    ptr->calculate();
    delete ptr;
    return 0;
}
