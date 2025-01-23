#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
       ch=toupper(ch);
    }
    else
    {
        ch=tolower(ch);
    }
    cout<<ch<<endl;

    return 0;
}
