#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,num,maxnum=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>num ;
        if(num>maxnum)
        {
            maxnum=num;
        }
    }
    cout<<maxnum<<endl;
    return 0;
}

