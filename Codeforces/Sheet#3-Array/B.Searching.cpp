#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,f,x;

    cin>>N;
    int m[N];
    for(i=0; i<N; i++)
    {
        cin>>m[i] ;
    }

    cin>>x;

    f=-1;
    for(i=0; i<N; i++)
    {
        if(x==m[i])
        {
            f=i;
            break;
        }
    }

    cout<<f;

    return 0;
}
