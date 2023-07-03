
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c;
    cin>>c;
    if(c%4==0 || c%7==0||c%44==0 || c%47==0 || c%74==0 || c%77==0 || c%447==0 || c%444==0||c%474==0||c%477==0|| c%744==0 || c%747==0 || c%774==0||c%777==0)
        cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}