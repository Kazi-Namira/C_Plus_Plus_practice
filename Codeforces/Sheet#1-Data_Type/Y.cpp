#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,x,z;
    cin>>a >>b >>c >>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    x=(a*b*c*d);
    z=x%100;
    if(z<10)
    {
    cout<<0<<z<<endl;
    }
    else
    {
        cout<<z<<endl;
    }

    return 0;
}
