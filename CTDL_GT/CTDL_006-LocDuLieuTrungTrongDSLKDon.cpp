#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    unordered_map <int, bool> m;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(m[tmp]==0){
            m[tmp]=1;
            cout << tmp << " ";
        }
    }
    cout << endl;
    return 0;
}