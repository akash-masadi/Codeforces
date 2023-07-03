
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=0,n,c=0;
    string s;
    cin>>s;
    n=s.size();
    while(i<n){
        if(s[i]==55 || s[i]==52)
        {
            c++;
        }
        i++;
    }
    cout<<((c==4||c==7)?"YES":"NO");
    return 0;
}