
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=1,n,c=0;
    string s;
    cin>>s;
    n=s.size();
    while(i<n){
        c=0;
        if(s[i-1]==s[i])
        {
            int j=i;
            while(j<n && s[j]==s[i]){c++;j++;}
            if(c>=6){c=-1;break;}
        }
        i++;
    }
    cout<<(c==-1?"YES":"NO");
    return 0;
}