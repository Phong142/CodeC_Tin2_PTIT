#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s, tmp;
        getline(cin, s);
        stringstream ss(s);
        stack <string> st;
        while(ss >> tmp){
            st.push(tmp);
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}