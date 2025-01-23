#include<iostream>
using namespace std;
int main()
{
    int N,i,f;
    cin>>N;
    int A[N];

    for(i=1; i<=N; i++)
    {
        cin>>A[i] ;
    }
    f=1;
    for(i=1; i<=N/2; i++)
    {
        if(A[i]!=A[N-i+1])
        {
            f=0;
        }
    }
    if(f==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

    return 0;
}

