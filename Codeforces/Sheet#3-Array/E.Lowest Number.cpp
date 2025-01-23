#include<iostream>
using namespace std;
int main()
{
    int N,i,lowest,position;
    cin>>N;
    int A[N];

    for(i=1; i<=N; i++)
    {
        cin>>A[i] ;
    }
    lowest=A[1];
    position=1;
    for(i=1; i<=N; i++)
    {
        if(A[i]<lowest)
        {
            lowest=A[i];
            position=i;
        }
    }
    cout<<lowest<<" "<<position;
    return 0;
}
