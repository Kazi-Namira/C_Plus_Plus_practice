#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cout<<N/365<<" years"<<endl;
    cout<<(N%365)/30<<" months"<<endl;
    cout<<(N%365)%30<<" days"<<endl;

    return 0;
}
