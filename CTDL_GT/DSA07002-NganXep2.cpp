#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    stack <int> st;
    string s;
    int n;
    while (test--) {
        cin >> s;
        if(s=="PUSH"){
            cin >> n;
            st.push(n);
        }
        else if(s=="PRINT"){
            if(!st.empty()){
                cout << st.top() << endl;
            }
            else cout << "NONE"<< endl;
        }
        else if(s=="POP"){
            if(!st.empty())
                st.pop();
        }
        cout << endl;
    }
    return 0;
}