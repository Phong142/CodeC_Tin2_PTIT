#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int x;
        vector < int > v;
        for (int i = 0; i < n; i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int minn=v[1]-v[0];
        for(int i=1; i<n-1; i++){
            int tmp=v[i+1]-v[i];
            minn=min(minn, tmp);
        }
        cout << minn;
        cout << endl;
    }
    return 0;
}