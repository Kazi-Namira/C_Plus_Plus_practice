#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,isprime=1;
    cin>>N;
    for(i=2; i<N; i++)
    {
        if(N%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

