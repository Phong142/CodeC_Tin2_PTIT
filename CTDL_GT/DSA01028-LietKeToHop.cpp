// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int x, n, a[1001], ok, k;
// void inkq(){
//     for(int i=0; i<k; i++)
//         cout << a[i] << " ";
//     cout << endl;
// }
// void sinhth(){
//     int i=k-1;
//     while(i>=0 && a[i]==n-k+i+1) i--;
//     if(i>=0){
//         a[i]++;
//         for(int j=i+1; j<k; j++)
//             a[j]=a[j-1]+1;
        
//     }
//     else ok=0;
// }
// int main() {
//     faster;
//     set <int> s;
//     cin >> x >> k;
//     for(int i=0; i<x; i++){
//         cin >> a[i];
//         s.insert(a[i]);
//     }
//     int j=0;
//     for(set <int>:: iterator it = s.begin(); it !=s.end(); it++){
//         a[j++]=*it;
//         n++;
//     }
//     ok=1;
//     while(ok){
//         inkq();
//         sinhth();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int ok=1, b[1000];

void result(int c[], int k){
    for(int i=1; i<=k; i++)
        cout << c[i] << " ";
    cout << endl;
}

void next_combination(int c[], int n, int k){
    int i=k, l=n;
    while(i>0 && c[i]==b[n-k+i-1]) i--;
    if(i>0){
        while(c[i]!=b[l]) l--; 
        c[i] = b[++l];
        for(int j=i+1; j<=k; j++) c[j] = b[++l];
    }
    else ok=0;
}

int main(){
        int n, k;
        cin >> n >> k;
        set<int> a;
        int tmp, c[k+5]={};
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            a.insert(tmp);
        }
        set<int>:: iterator itr;
        int i=1;
        for(itr = a.begin(); itr != a.end(); itr++)
            b[i++] = *itr;
        for (int j = 1; j <= k; j++)
            c[j] = b[j];
        while(ok){
            result(c,k);
            next_combination(c,i,k);
        }
}