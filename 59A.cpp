
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=0,c=0,n;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]>=97)c++;
    }
    for(i=0;i<n;i++)
    {
        if(c>=n-c)
        {
            cout<<char(tolower(s[i]));
        }
        else cout<<char(toupper(s[i]));
    }
    return 0;
}
