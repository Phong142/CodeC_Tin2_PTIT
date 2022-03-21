#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int chanle(long long n){
	long long dem = 0, check = 0;
	while(n){
		if ((n % 10) % 2 == 0) dem ++;
		else check++;
		n /= 10;
	}
	if( check == dem && n % 2==0) return 1;
	else return 0;
}
int mu(long long n){
	long long s =1;
	for(long long i = 1; i <= n;i++) s*= 10;
	return s;
}
int main(){
    faster;
	long long n, count = 0;
	scanf("%lld", &n);
	long long a = mu(n-1), b= mu(n);
	for(long long i = a; i < b;i++){
		if( chanle(i)){
            cout << i << " ";
			count++;
        }
		if( count == 10){
			cout << endl;
			count = 0;
		}
	}
}