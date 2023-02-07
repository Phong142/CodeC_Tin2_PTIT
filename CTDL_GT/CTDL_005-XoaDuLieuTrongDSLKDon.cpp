#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int k;
    cin >> k;
    for(int i=0; i<n; i++){
        if(v[i]!=k) cout << v[i] << " ";
    }
    return 0;
}