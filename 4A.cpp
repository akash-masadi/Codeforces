/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==0 && n>2)
        std::cout << "YES" << std::endl;
    else
    cout<<"NO";

    return 0;
}
