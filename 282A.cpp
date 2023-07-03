#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int t,i=0;
   string s;
   cin>>t;
   while(t--)
   {
       cin>>s;
       if(s=="++X") ++i;
       else if(s=="X++") i++;
       else if(s=="--X") --i;
       else i--;
   }
   cout<<i;
   
}
