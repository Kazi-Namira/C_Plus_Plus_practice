#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "sanam";
    string p=str;
    reverse(p.begin(),p.end());
    if(p==str)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
    return 0;
}
