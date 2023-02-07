#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        cout << s << " ";
        while(next_permutation(s.begin(), s.end()))
            cout << s << " ";
        cout << endl;
    }
    return 0;
}