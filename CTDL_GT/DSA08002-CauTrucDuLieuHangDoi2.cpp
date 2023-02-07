#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    queue <int> q;
    while (test--) {
        string s;
        cin >> s;
        if(s=="PUSH"){
            int n;
            cin >> n;
            q.push(n);
        }
        else if(s=="POP"){
            if(q.empty()) continue;
            else
                q.pop();
        }   
        else if(s=="PRINTFRONT"){
            if(q.empty())
                cout << "NONE" << endl;
            else
                cout << q.front() << endl;
        }
        cout << endl;
    }
    return 0;
}