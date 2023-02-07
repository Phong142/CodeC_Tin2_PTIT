#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n+5];
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a,a+n);
		long long mini = 99999999;
		for(int i=0; i<n-1; i++)
			mini = min(a[i+1]-a[i],mini);
		cout << mini << endl;
	}
}

