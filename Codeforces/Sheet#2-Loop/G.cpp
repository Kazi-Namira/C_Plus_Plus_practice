#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,num,result=1;
    long long result;
    cin>>N;
    for(i=1;i<=N;i++)   //or while(--N)
    {
        cin>>num ;
        //result=1;
        for(int j=1;j<=num;++j)
        {
            result*=j;
        }
        cout<<result<<endl;
    }
    return 0;
}

