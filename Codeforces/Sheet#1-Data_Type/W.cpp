#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    char s,g;
    cin>>a >>s >>b >>g >>c;
    x=a+b;
    y=a-b;
    z=a*b;
    if(x==c)
    {
        cout<<"Yes"<<endl;
    }
    else if(y==c)
    {
        cout<<"Yes"<<endl;
    }
    else if(z==c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        if(s=='+' && x!=c)
    {
        cout<<a+b<<endl;
    }
    else if(s=='-' && y!=c)
    {
        cout<<a-b<<endl;
    }
    else
    {
        cout<<a*b<<endl;
    }

    }
    return 0;
}
