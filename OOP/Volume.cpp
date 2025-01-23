#include<bits/stdc++.h>
using namespace std;
class Volume
{
    public:
    double l,w,h;
    //double volume=0;
};
int main()
{
    Volume V;
    double volume=0;
    V.l=2.0;
    V.w=3.0;
    V.h=4.0;
    volume=V.l*V.w*V.h;
    cout<<"Volume : "<<volume<<endl;
    return 0;
}
