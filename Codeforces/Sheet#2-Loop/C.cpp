#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,num,i,even,odd,pos,neg;
    cin>>N;
    even=odd=pos=neg=0;
    for(i=1; i<=N; i++)
    {
        cin>>num ;
        if(num%2==0)
        {
            even++;
        }
        else if(num%2!=0)
        {
            odd++;
        }
        if(num<0)
        {
            neg++;
        }
        else if(num>0)
        {
            pos++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    return 0;
}
