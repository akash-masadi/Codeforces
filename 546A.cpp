
#include <iostream>
#include <string>

using namespace std;

int main()
{
     int k,n,w;
    cin>>k>>n>>w;
    w=(w*(w+1))/2;
    cout<<(n<w*k?w*k-n:0);
    return 0;
}
