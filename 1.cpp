/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t,x,k;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        if(x%k!=0)
        {
            cout<<1<<endl<<x<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<x-k-1<<" "<<(k+1)<<endl;
        }
    }

    return 0;
}
