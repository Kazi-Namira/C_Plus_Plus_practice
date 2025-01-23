#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n;
    m=n;
    if(m>0)
    {
        while(m>=1 && m%2==0)
        {
            m=m/2;
        }

        if(m==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
