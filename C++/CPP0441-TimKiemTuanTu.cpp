#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        long long n, X;
        cin >> n >> X;
        long long A[n+1], dem = -1;
        for(long long i = 1; i <= n;i++) 
            cin >> A[i];
        for(long long i = 1; i <= n;i++){
            if(A[i] == X) {
               dem = i;
               break;
            }
        }   
     cout << dem << endl;
    }
}