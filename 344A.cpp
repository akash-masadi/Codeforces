#include <iostream>

using namespace std;

int main()
{
    int n,k,p=0,c=0;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(p==k){
            continue;
        }
        else{
        c++;
        }
        p=k;
    }
    cout<<c;
    return 0;
}
