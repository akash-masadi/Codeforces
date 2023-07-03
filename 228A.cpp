#include <iostream>
#include <set>
using namespace std;
int main()
{
    int a;
    set<int> x;
    int i=0;
    while(i++<4){
        cin>>a;
        x.insert(a);
    }
    cout<<4-x.size();
    return 0;
}
