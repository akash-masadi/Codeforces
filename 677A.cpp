
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=1,n,t,h;
    cin>>n>>t;
    i=n;
    while(i--){
        cin>>h;
        if(h>t)n++;
    }
    cout<<n;
    return 0;
}
