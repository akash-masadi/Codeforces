#include <iostream>
using namespace std;

int main()
{
    int s,n;
    cin>>s;
    n=s;
    while(n--)
    {
             if(s%2!=0){
                if(n==0)cout<<"I hate it";
                else if(n%2==0)cout<<"I hate that ";
                else cout<<"I love that ";
             }
             else
             {
                if(n==0)cout<<"I love it";
                else if(n%2==0)cout<<"I love that ";
                else cout<<"I hate that ";
             }
    }
    return 0;
}
