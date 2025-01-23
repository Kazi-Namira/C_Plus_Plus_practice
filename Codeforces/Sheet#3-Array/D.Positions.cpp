#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    int A[N];

    for(i=0; i<N; i++)
    {
        cin>>A[i] ;
    }

    for(i=0; i<N; i++)
    {
        if(A[i]<=10)
        {
            cout<<"A["<<i<<"]"<<" = "<<A[i]<<endl;
        }
    }
    return 0;
}

