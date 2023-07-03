
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=1,n,t;
    string s;
    cin>>n>>t>>s;
    while(t--){
        i=1;
        while(i<n){
        if(s[i-1]=='B' &&s[i]=='G')
        {
            char x=s[i-1];
            s[i-1]=s[i];
            s[i]=x;
            i++;
        }
        i++;
        }
    }
    cout<<s;
    return 0;
}
