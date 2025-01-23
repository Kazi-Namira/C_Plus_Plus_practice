#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,r,c;
    cin>>N;
    for(r=1; r<=N; r++)
    {
        for(c=1; c<=r; c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

