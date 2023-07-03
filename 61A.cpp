/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])cout<<0;
        else cout<<1;
    }
    return 0;
}
