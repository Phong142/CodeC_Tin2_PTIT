#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        cin >> s;
        int k = s.size(), dem=0;
        for(int i = 0; i < k-1;i++){
            for(int j = i+1; j < k;j++){
                if(s[i] == s[j]) dem++;
            }
        }
        cout << dem+k << endl;
    }
    return 0;
}
