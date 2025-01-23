#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,i,found_lucky=0;
    cin>>N>> M;
    for(i=N; i<=M; i++)
    {
        if(i%10==4 || i%10==7)
        {
            cout<<i<<" ";
            found_lucky=1;
        }
    }
    if(!found_lucky)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}


