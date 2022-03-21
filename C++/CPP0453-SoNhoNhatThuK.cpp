#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            if(i+1==k)
                cout << v[i];
        }
        cout << endl;
    }
    return 0;
}