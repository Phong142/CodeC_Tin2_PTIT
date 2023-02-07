#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
pair<int, int> v[N];
int n, a[N], f[N];
void xuly()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i], v[i] = {a[i], i};
	sort(v, v + n);
	for (int i = 0; i < n; i++)
		f[v[i].second] = i + 1;
	vector<int> res(n + 1, 0);
	int ans = 0;
	for (int i = 0; i < n;i++)
	{
		res[f[i]] = res[f[i] - 1] + 1;
		if (ans < res[f[i]])
			ans = res[f[i]];
	}
	cout << n - ans;
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	// cin>>t;
	while (t--)
		xuly();
	return 0;
}