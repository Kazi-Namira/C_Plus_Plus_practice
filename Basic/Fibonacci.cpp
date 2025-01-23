#include <iostream>
using namespace std;
int main()
{
    int a=1,b=1,n,c,i;
    cin>>n;
    cout<<"Fibonacci series of :"<<endl;
    if(n>1 || n<500)
    {
        cout<<a<<" "<<b<<" ";
        for(i=1; i<=n; i++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
return 0;
}
