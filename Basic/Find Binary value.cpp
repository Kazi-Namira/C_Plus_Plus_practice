#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,digit,binary[15],i=0,j;
    cout<<"Enter a num : ";
    cin>>num;
    while(num!=0)
    {
        digit=num%2;
        num=num/2;
        binary[i]=digit;
        i++;
    }
    for(j=i-1; j>=0; j--)
    {
        cout<<binary[j];
    }
    return 0;
}
