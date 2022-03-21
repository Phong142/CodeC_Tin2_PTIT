#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if(s1.find(s2)!=string::npos){  //npos(-1) truong hop k tim thay s2 trong s1
        s1.replace(s1.find(s2), s2.size(), "");
        cout << s1 << endl;
    }
    return 0;
}