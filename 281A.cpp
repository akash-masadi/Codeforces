#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  s[0]=toupper(s.at(0));
  cout<<s;
  return 0;
}
