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
        set<int> s;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            s.insert(tmp);
        }
        set <int>:: iterator minn=s.begin(), maxx=s.end();
        int l=*minn, r=*(--maxx);
        cout << r-l+1-s.size();
        cout << endl;
    }
    return 0;
}