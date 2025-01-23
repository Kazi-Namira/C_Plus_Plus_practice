#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    int i,prime=1;
    cin>>n;
    if(n<=1)
    {
        prime=0;
    }
    else
    {
        for(i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
        }
    }

    if(prime==0)
    {
        cout<<"NO";
    }

    else
    {
        cout<<"YES";
    }
    return 0;
}



