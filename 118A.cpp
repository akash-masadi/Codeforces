
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        char c=tolower(s[i]);
        if(c=='a'||c=='e' || c=='i'||c=='o' ||c=='u'||c=='y')
        continue;
        else
        {
            cout<<"."<<c;
        }
    }
    return 0;
}
