#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int N,i;
    long long sum=0;

    cin>>N;
    int m[N];
    for(i=0; i<N; i++)
    {
        cin>>m[i] ;
    }

    for(i=0; i<N; i++)
    {
        sum+=m[i];
    }

    cout<<abs(sum);

    return 0;
}

