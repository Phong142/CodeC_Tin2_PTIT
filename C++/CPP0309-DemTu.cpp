// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// void dem(string s){
//     int count=0;
//     for(int i=0; i<s.size()-1; i++){
//         if(s[i]==' '  && s[i+1]!=' ') count++;
//     }
//     if(s[0]!=' ') count++;
//     cout << count;
// }
// int main() {
//     faster;
//     int test;
//     cin >> test;
//     cin.ignore();
//     while (test--) {
//         string s;
//         getline(cin, s);
//         dem(s);
//         cout << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

long long check(string a){
    int count = 0;
    int i = 0, dd = 0;
    while(a[i] != '\0'){
        if(a[i] == ' ' || a[i] == '\n' || a[i] == '\t') dd = 0;
        else if(dd==0){
            dd = 1;
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin, a);
        cout << check(a) << endl;
    }
}