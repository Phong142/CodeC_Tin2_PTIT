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
        set <int> s;
        set <int> :: iterator it;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            s.insert(tmp);
        }
        if(s.size()<=1)
            cout << -1;
        else{
            it=s.begin();
            cout << *it << " ";
            it++;
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}