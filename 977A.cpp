
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long i=0,n,k;
    cin>>n>>k;
   while(k--)
    {
    if(n%10==0)n/=10;
    else n-=1;
    }
    cout<<n<<endl;

    return 0;
}
