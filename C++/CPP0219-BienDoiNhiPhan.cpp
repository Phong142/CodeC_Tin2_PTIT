#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        int a[n+5][m+5];
        int b[n+5][m+5]={0};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                if(a[i][j]==1){
                    for(int x=0; x<n; x++){
                        for(int y=0; y<m; y++){
                            if(x==i || y==j)
                                b[x][y]=1;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}