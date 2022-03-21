#include<iostream>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int n, count, k, a[30], b[30];
void xl(int i) {
    int j;
    for (j = 1; j <= n; j++){
        if (b[j]) {
            a[i] = j;
            b[j] = 0;
            if (i == n) {
                for (int i = 1; i <= n; i++)
                    cout << a[i];
                cout << " ";
            } 
            else xl(i + 1);
            b[j] = 1;
        }
    }
}
int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) b[i] = 1;
        xl(1);
        cout << endl;
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// // ham next_permutation
// int hv[1001], stop;
// void inhv(int n){
//     for(int i=1; i<=n; i++)
//         hv[i]=i;
// }
// void inkq(int n){
//     for(int i=1; i<=n; i++)
//         cout << hv[i];
//     cout << " ";
// }
// void sinhhv(int n){
//     int i=n-1;
//     while(i>0 && hv[i] > hv[i+1]) i--;
//     if(i<=0) stop=1;
//     else{
//         int k=n;
//         while(hv[k]<hv[i]) k--;
//         swap(hv[k], hv[i]);
//         int l=i+1, r=n;
//         while(l<r){
//             swap(hv[l], hv[r]);
//             l++, r--;
//         }
//     }
// }
// void HV(int n){
//     inhv(n);
//     while(!stop){
//         inkq(n);
//         sinhhv(n);
//     }
// }
// int main() {
//     faster;
//     int test;
//     cin >> test;
//     while (test--) {
//         int n;
//         cin >> n;
//         HV(n);
//         cout << endl;
//     }
//     return 0;
// }