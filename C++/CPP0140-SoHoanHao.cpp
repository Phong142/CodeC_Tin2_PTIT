// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int su(long long n){
//     long long sum=0;
//     if(n>8128) return 0;
//     for(long long i=1; i<=sqrt(n); i++){
//         if(n%i==0 && i==1)
//             sum+=i;
//         if(n%i==0 && i!=1){ 
//             sum+=i;
//             sum+=n/i;
//         }
//     }
//     return sum;
// }
// int main() {
//     faster;
//     int test;
//     cin >> test;
//     while (test--) {
//         long long n;
//         cin >> n;
//         if(su(n)==n) cout << "1" << endl;
//         else cout << "0" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int nto(long long n)
{
    if(n < 2) return 0;
    for(long long i = 2; i <= sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    long long arr[100];
    int dem = 0;
    for (long long i = 0; i < 32; i++)
    {
        long long mu = pow(2, i) - 1;
        if (nto(i) == 1 && nto(mu) == 1)
            arr[dem++] = mu * pow(2, i - 1);
    }
    while (t--)
    {
        long long a;
        cin >> a;
        int kq = 0;
        for (int i = 0; i < dem; i++)
        {
            if (a == arr[i])
                kq = 1;
        }
        cout << kq << endl;
    }
}
