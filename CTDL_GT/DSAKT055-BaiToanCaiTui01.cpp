#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

int n,m;
pair<int,int> a[1005];
ll f[1005][1005];
void xuly()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i].first;
    for(int i=1;i<=n;i++) cin>>a[i].second;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            f[i][j]=f[i-1][j];
            if(j>=a[i].first) f[i][j]=max(f[i][j],f[i-1][j-a[i].first]+a[i].second);
        }
    }
    cout<<f[n][m] << endl;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        xuly();
        cout << endl;
    }
    return 0;
}