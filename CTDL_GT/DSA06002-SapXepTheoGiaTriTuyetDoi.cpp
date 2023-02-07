#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int x;
struct mang{
    int ind, val;
};
int rules(mang a, mang b){
    if(abs(a.val-x) == abs(b.val-x))
        return a.ind < b.ind;
    return abs(x-a.val) < abs(x-b.val);
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n >> x;
        vector <mang> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i].val;
            a[i].ind = i;
        }
        sort(a.begin(), a.end(), rules);
        for(int i=0; i<n; i++)
            cout << a[i].val << ' ';
        cout << endl;
    }
    return 0;
}