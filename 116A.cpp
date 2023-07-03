
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=0,n,c=0,m=0,a,b;
    cin>>n;
    while(i<n){
        cin>>a>>b;
        c=c-a+b;
        m=max(m,c);
        i++;
    }
    cout<<m;
    return 0;
}