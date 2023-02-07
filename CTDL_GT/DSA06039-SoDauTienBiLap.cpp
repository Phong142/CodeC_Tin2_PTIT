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
        unordered_map <long long, long long> m;
        for(int i=0; i<n; i++){
            long long tmp;
            cin >> tmp;
            m[tmp]++;
        }
        int check=0;
        for(auto i:m){
            if(i.second >= 2){
                cout << i.first;
                check=1;
                break;
            }
        }
        if(!check) cout << "NO";
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n,check=0;
// 		cin >> n;
// 		long long a[n+5]={};
// 		unordered_map<long long, long long> b;
// 		for(int i=0; i<n; i++){
// 			cin >> a[i];
// 			b[a[i]] = b[a[i]]+1;
// 		}
// 		for(int i=0; i<n; i++){
// 			if(b[a[i]]>=2){
// 				cout << a[i] << endl;
// 				check=1;
// 				break;
// 			}
// 		}
// 		if(!check) cout << "NO\n";
// 	}
// }

