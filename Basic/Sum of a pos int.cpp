#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,digit=0,sum=0;
    cout<<"Enter a num : ";
    cin>>num;
    while(num!=0)
    {
        digit=num%10;
        num=num/10;
        sum+=digit;
    }
    cout<<sum<<endl;
    return 0;
}

