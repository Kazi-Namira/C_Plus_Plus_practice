#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,i,digit=0,revnum=0;
    cin>>N;
    M=N;
    while(N!=0)
    {
        digit=N%10;
        revnum=revnum*10+digit;;
        N=N/10;
    }
    cout<<revnum;

    if(M==revnum)
    {
        cout<<'\n'<<"YES"<<endl;
    }
    else
    {
        cout<<'\n'<<"NO"<<endl;
    }
    return 0;
}

