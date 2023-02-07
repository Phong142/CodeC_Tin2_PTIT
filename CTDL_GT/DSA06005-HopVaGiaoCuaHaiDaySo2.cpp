#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        int a[n+5], b[m+5];
        set <int> s;
        set <int>::iterator it;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
            s.insert(b[i]);
        }
        for(it=s.begin(); it!=s.end(); it++)
            cout << *it  << " ";
        cout << endl;
        int i=0, j=0;
        sort(a, a+n);
        sort(b, b+m);
        while(i!=n && j!=m){
            if(a[i]==b[j]){
                cout << a[i] << " ";
                i++; j++;
            }
            else if(a[i]<b[j]) i++;
            else j++;
        }
        cout << endl;
    }
    return 0;
}