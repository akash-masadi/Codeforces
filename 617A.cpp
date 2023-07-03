
#include <iostream>
#include <string>

using namespace std;

int main()
{
     int k;
    cin>>k;
    cout<<(k<=5?1:k/5+(k%5==0?0:1));
    return 0;
}
