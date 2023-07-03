
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=0,n,c=0;
    string s;
    cin>>n>>s;
    while(i<n){
        if(s[i]=='A')
        {
            c++;
        }
        i++;
    }
    n=abs(n-c);
    cout<<((c>n)?"Anton":(c<n?"Danik":"Friendship"));
    return 0;
}