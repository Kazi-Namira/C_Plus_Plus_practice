#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    int m[N];
    for(i=0; i<N; i++)
    {
        cin>>m[i] ;
    }

    for(i=0; i<N; i++)
    {
        if(m[i]>0)
        {
            m[i]=1;
        }
        if(m[i]<0)
        {
            m[i]=2;
        }
        if(m[i]==0)
        {
            m[i]=0;
        }
        cout<<m[i]<<" ";
    }

    return 0;
}

