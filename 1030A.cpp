
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=1,n,h;
    cin>>n;
    while(n--){
        cin>>h;
        if(h==1){cout<<"HARD";return 0;}
    }
    cout<<"EASY";
    return 0;
}
