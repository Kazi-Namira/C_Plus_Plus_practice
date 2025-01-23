
// Counting string or word using stringstream :

#include<bits/stdc++.h>
using namespace std;
int main()

{
    string s="Kazi Namira Meyheg Sanam";
    stringstream obj(s);
    string word;
    int count=0;
    while(obj>>word)
    {
        count++;
    }
    cout<<count<<endl;
    return 0;
}
