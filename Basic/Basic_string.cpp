#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Namira Meyheg Sanam";
    stringstream obj(s);
    string temp;

    while(obj>>temp)
    {
        cout<<temp<<endl;
    }
    return 0;
}
