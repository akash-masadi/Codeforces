
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=0,c1=0,c2=0,c3=0,n,x,y,z;
    cin>>n;
   while(n--)
    {
    cin>>x>>y>>z;
    c1+=x;
    c2+=y;
    c3+=z;
    }
    cout<<((c1==0&&c2==0&&c3==0)?"YES":"NO")<<endl;

    return 0;
}
