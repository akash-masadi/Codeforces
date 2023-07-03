
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=0,n,m;
    cin>>n>>m;
    while(1){
        if(n>m){
            break;
        }
        n=n*3;
        m=m*2;
        i++;
    }
    cout<<i;
    return 0;
}
