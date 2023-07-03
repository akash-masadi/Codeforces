/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,k,t,p;
    cin >> n;
    p=0;
    for(int i=0;i<n;i++)
    {
        k=0;
        for(int j=0;j<3;j++)
        {
            cin>>t;
            if(t==1)k++;
        }
        if(k>=2)p++;
    }
    cout<<p<<endl;
    return 0;
}
