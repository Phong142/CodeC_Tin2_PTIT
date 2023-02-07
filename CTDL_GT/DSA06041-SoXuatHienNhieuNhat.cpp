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
        map <long long, long long> m;
        for(int i=0; i<n; i++){
            long long tmp;
            cin >> tmp;
            m[tmp]++;
        }
        long long maxx=0, res=-1;
        for(auto i:m){
            if(maxx < i.second){
                res = i.first;
                maxx = i.second;
            }
        }
        if(maxx > n/2) cout << res;
        else cout << "NO";
        cout << endl;
    }
    return 0;
}