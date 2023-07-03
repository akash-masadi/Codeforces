
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int i=0,n,c=0,m=0,a,b;
    string s,d;
    cin>>s>>d;
    reverse(d.begin(),d.end());
    cout<<(s==d?"YES":"NO");
    return 0;
}