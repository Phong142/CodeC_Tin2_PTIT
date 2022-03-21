#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long fibo(long long n){
        long long sum=0, n1=0, n2=1;
        while(sum < n){
            sum = n1 +n2;
            n1=n2;
            n2=sum;
        }
        if(sum == n) return 1;
        else return 0;
}

int main(){
	faster;
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(fibo(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
