#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
   int j=0,i=0,t;
   while(i<5)
   {
       j=0;
       while(j<5)
       {
           cin>>t;
           if(t==1)
           {
               goto p;
           }
           j++;
       }
       i++;
   }
   p:
   cout<<abs(2-i)+abs(2-j);
   
}
