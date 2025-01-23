#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1,l2,r1,r2,left_side,right_side;
    cin>>l1 >>r1 >>l2 >>r2;

    left_side=max(l1,l2);
    right_side=min(r1,r2);

    if(left_side<=right_side)
    {
        cout<<left_side<<" "<<right_side<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

    return 0;
}
