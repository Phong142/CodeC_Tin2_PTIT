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
        vector <int> a;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        int mini = 1e6;
        for (int i = 0; i < n-1; i++){
            for (int j = i+1; j < n; j++){
                if(abs(a[i]+a[j]) < abs(mini))
                    mini = a[i]+a[j];
            }
        }
        cout << mini << endl;
    }
    return 0;
}