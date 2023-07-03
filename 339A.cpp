#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;
  int l = s.length(),c=0;
  int a[l];
  for (int i = 0; i < l ; i++) {
    if(s[i]!='+'){
    a[c++]=s[i]-'0';        
    }
  }
  sort(a,a+c);
    for (int i = 0; i < c; i++) {
    cout<<a[i];
    if(i==c-1)break;
    cout<<"+";
  }
  return 0;
}
