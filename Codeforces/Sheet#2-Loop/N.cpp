#include <bits/stdc++.h>
using namespace std;
int main()
{
    char S;
    int N,num,i,j;
    cin>>S;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        cin>>num ;
        for(j=1; j<=num; j++)
        {
            cout<<S;
        }
        cout<<endl;
    }
    return 0;
}

