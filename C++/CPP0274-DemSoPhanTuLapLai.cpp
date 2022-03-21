#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
		cin>>n;
		int a[n], b[100000]={0};
		int sum=0;
		for(int i=0; i<n; i++) 
		{
			cin>>a[i];
            b[a[i]]++;
		}
		for(int i=0; i<n; i++) 
		{
			if(b[a[i]] > 1) 
			{
				sum++;
			}
		}
		cout<<sum<<endl;
    }
    return 0;
}