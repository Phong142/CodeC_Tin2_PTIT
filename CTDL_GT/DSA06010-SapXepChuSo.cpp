#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        set <int> s;
        set <int>::iterator it;
        long long tmp;
        while(n--){
            cin >> tmp;
            while(tmp){
                int temp=n%10;
                s.insert(temp);
                n/=10;
            }
        }
        for(it=s.begin(); it!=s.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         long long x;
//         set<int> s;
//         while (n--)
//         {
//             cin >> x;
//             while (x)
//             {
//                 int a = x%10;
//                 s.insert(a);
//                 x/=10;
//             }
//         }
//         set<int>::iterator itr;
//         for (itr = s.begin(); itr != s.end(); itr++) cout << *itr << " ";
//         cout << endl;
//     }
// }