#include <iostream>
#include <set>
using namespace std;

int main() {
  string s;
  cin >> s;

 set<char> ss(s.begin(), s.end());

  if (ss.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << std::endl;
  } else {
    cout << "IGNORE HIM!" << std::endl;
  }

  return 0;
}
