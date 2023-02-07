#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define maxx 1000000

int nto[1000005];
void sangnt(){
    nto[0] = nto[1] = 1;
    for(int i=2; i<=sqrt(maxx); i++){
        if(!nto[i]){
            for(int j=i*i; j<=maxx; j+=i){
                nto[j] = 1;
            }
        }
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        int check=0;
        for(int i=2; i<=sqrt(n); i++){
            if(!nto[i] && !nto[n-i]){
                cout << i << " " << n-i << endl;
                check=1;
                break;
            }
        }
        if(check==0)
            cout << -1 << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int nto[1000006];
// void sang(){
//     nto[0] = 1;
//     nto[1] = 1;
//     for (int i = 2; i <=1000000 ; i++)
//     {
//         if(!nto[i])
//             for (int j = 2*i; j<=1000000; j+=i)
//                 nto[j] = 1;
//     }
    
// }

// int main(){
//     sang();
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         int check = 0;
//         for(int i = 2; i <= sqrt(n); i++){
//             if(!nto[i] && !nto[n-i]){
//                 cout << i << " " << n-i << endl;
//                 check = 1;
//                 break;
//             }
//         }
//         if(!check) cout << -1 << endl;
//     }
// }