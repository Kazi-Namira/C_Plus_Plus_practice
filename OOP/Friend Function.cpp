#include <iostream>
using namespace std;
class MyClass
{
private:
    int privateValue;

public:
    MyClass()
    {
        privateValue=10;
    }

    friend void friendFunction(MyClass obj);
};

void friendFunction(MyClass obj)
{
    cout << "Accessing privateValue from friend function: " << obj.privateValue <<endl;
}

int main()
{
    MyClass Obj;
    friendFunction(Obj);

    return 0;
}

