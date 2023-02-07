// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int main() {
//     faster;
//     int test;
//     cin >> test;
//     while (test--) {
//         int n;
//         cin >> n;
//         long long a[n+5];
//         long long b[n+5];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         for(int i=0;i<n;i++){
//             cin >> b[i];
//         }
//         sort(a, a+n);
//         sort(a, b+n);
//         long long count=0;
//         for(int i=0;i<n;i++){
//             count+=a[i]*b[n-i-1];
//         }
//         cout << count << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n+5]={}, b[n+5]={}, sum=0;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0; i<n; i++){
			sum += a[i]*b[n-1-i];
		}
		cout << sum << endl;
	}
}
