#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    	long long n;
		cin >> n;
		long long sum = 0, tmp;
		priority_queue<long long, vector<long long>, greater<long long> > a;
		for(long long i=0; i<n; i++){
			cin >> tmp;
			a.push(tmp);
		}	
		while(a.size()>1){
			long long m = a.top(); a.pop();
			long long n = (a.top()+m)%1000000007;
			a.pop();
			sum = (sum+n)%1000000007;
			a.push(n);
		}
		cout << sum << endl;
    }
}

