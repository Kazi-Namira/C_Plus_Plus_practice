#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j;
    cin>>N;
    for(i=2; i<=N; i++)
    {
        bool isprime=1;
        for(j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime)
        {
            cout<<i<<" ";
        }
 }
    return 0;
}


