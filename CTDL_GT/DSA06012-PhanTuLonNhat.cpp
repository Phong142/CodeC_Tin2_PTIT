#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

struct cmp{
    bool operator() (int a, int b) { return a>b; }
};
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n, greater<int>());
        for(int i=0; i<k; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}