#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m, k;
        cin >> n >> m >> k;
        multiset <int> ms;
        multiset <int>::iterator it;
        for(int i=0; i<n+m; i++){
            int tmp;
            cin >> tmp;
            ms.insert(tmp);
        }
        // for(it=ms.begin(); it!=ms.end(); it++){
        //     cout << *it << " ";
        // }
        int i=0;
        for(it=ms.begin(); it!=ms.end(); it++){
            if(i==k-1){
                cout << *it;
            }
            i++;
        }
        cout << endl;
    }
    return 0;
}