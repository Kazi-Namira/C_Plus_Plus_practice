#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,i,div=0;
    cin>>N>> M;
    int greater_num=max(N,M);
    for(i=1; i<=greater_num; i++)
    {
        if( N%i==0 && M%i==0)
        {
            div=i;
        }
    }
    cout<<div<<endl;
    return 0;
}

