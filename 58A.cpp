#include <iostream>
#include<regex>
using namespace std;

int main()
{
    string s;
    cin>>s;
    regex pattern("\\w*(h){1,}(e){1,}(l){2,}(o)\\w*");
    if(regex_match(s, pattern)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
