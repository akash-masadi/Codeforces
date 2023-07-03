#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int m = -100;
        for (int i = 0; i < n; i++) {
            int c = 1;
            for (int j = i; j < n; j++) {
                if (a[i] != a[j]) {
                    break;
                }
                c++;
            }
            m = max(c, m);
        }
        cout << m << endl;
    }
    
    return 0;
}
