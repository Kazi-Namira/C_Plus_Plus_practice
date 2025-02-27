//Input Format:
//You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').
//
//Output Format:
//In the first line print two space-separated integers, representing the length of  and  respectively.
//In the second line print the string produced by concatenating  and  ().
//In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

//Solution:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    cin>>a;
    cin>>b;

    int len1 = a.size();
    int len2 = b.size();
    cout<<len1<<" "<<len2<<endl;

    string c=a+b;
    cout<<c<<endl;

    string A = b[0] + a.substr(1);
    string B = a[0] + b.substr(1);
    cout<<A<<" "<<B;
    return 0;
}
