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
		int a[n];
		for(int i=0;i<n;i++){
			cin >>a[i];
		}
		long min=abs(a[0]+a[1]);
		int a1,a2;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(min>abs(a[i]+a[j])){
					min=abs(a[i]+a[j]);
					a1=a[i];
					a2=a[j];
				}
			}
		}
		long tong=(long)a1+a2;
		cout << tong;
        cout << endl;
    }
    return 0;
}