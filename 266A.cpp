
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=1,n,c=0;
    string s;
    cin>>n>>s;
    while(i<n){
        if(s[i-1]==s[i])
        {
            int j=i;
            while(j<n && s[j]==s[i]){c++;j++;}
            i=j;
        }
        i++;
    }
    cout<<c;
    return 0;
}
