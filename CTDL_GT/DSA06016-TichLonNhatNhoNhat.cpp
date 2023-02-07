#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n1, n2;
        cin >> n1 >> n2;
        long long a[n1+5];
        long long b[n2+5];
        for(int i=0; i<n1; i++)
            cin >> a[i];
        for(int i=0; i<n2; i++)
            cin >> b[i];
        sort(a, a+n1);
        sort(b, b+n2);
        cout << a[n1-1]*b[0];
        cout << endl;
    }
    return 0;
}