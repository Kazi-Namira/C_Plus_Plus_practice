#include<iostream>
using namespace std;
int main()
{
    int N,i,j,temp;
    cin>>N;
    int A[N];

    for(i=0; i<N; i++)
    {
        cin>>A[i] ;
    }

    for(i=0; i<N-1; ++i)
    {
        for(j=0; j<N-i-1; ++j)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(i=0; i<N; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

