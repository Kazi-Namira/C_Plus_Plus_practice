#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    float a,D;
    cin>>a;
    D=a-int(a);
    if(D<0.001)
    {
        cout<<"int "<<int(a)<<endl;
    }
    else
    {
        cout<<"float"<<" "<<int(a)<<" "<<fixed<<setprecision(3)<<D<<endl;
    }
    return 0;
}
