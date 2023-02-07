// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int n, a[1001], ok;
// void inkq(){
//     for(int i=0; i<n; i++){
//         // if(a[i]==1)
//         //     cout << 8;
//         // else cout << 6;
//         cout << a[i];
//     }
//     cout << endl;
// }
// void sinhnp(){
//     int i=n-1;
//     while(i>=0 && a[i]==1){
//         a[i]=0;
//         i--;
//     }
//     if(i>=0) a[i]=1;
//     else ok=0;
// }
// int checkdk(){                      //8=1   6=0
//     if(a[0]!=0)
//         return 0;
//     if(a[n-1]!=1)
//         return 0;
//     for(int i=0; i<n; i++){
//         if(a[i]==0 && a[i+1]==0)
//             return 0;
//         if(a[i]==1 && a[i+1]==1 && a[i+2]==1 && a[i+3]==1)
//             return 0;
//     }
//     return 1;
// }
// int main() {
//     faster;
//     cin >> n;
//     ok=1;
//     while(ok){
//         if(checkdk()){
//             inkq();
//             sinhnp();
//         }
//         else sinhnp();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int ok=1, n, a[20];

void result(){
	for(int i=1; i<=n; i++) 
		cout << a[i];
	cout << endl;
}

void next_permutation(){
    int i=n-1;
    while(i>2){
    	if(a[i]==8) a[i]=6;
		else if(a[i]==6 && a[i+1]==6 && a[i-1]==6) break;
    	i--;
	}
	if(i>2){
		while(i<=n){
			if(i==n) a[i-1]=8;
			else a[i]=8;
			i+=4;
		}
	}
	else ok = 0;
}

int main() {
	cin >> n;
	for(int i=1; i<=n; i++){
		if(i%4==1 && i!=n) a[i]=8;
		else a[i]=6;
	}
	if(n%4==1) a[n-1]=8;
	while(ok){
		result();
		next_permutation();
	}
}