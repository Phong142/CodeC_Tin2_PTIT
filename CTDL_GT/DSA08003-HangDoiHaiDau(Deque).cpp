#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    deque <int> dq;
    while (test--) {
        string s;
        cin >> s;
        if(s=="PUSHBACK"){
            int n;
            cin >> n;
            dq.push_back(n);
        }
        else if(s=="PUSHFRONT"){
            int n;
            cin >> n;
            dq.push_front(n);
        }
        else if(s=="POPBACK"){
            if(dq.empty()) continue;
            else
                dq.pop_back();
        }
        else if(s=="POPFRONT"){
            if(dq.empty()) continue;
            else
                dq.pop_front();
        }
        else if(s=="PRINTBACK"){
            if(dq.empty()) cout << "NONE" << endl;
            else
                cout << dq.back() << endl;
        }
        else if(s=="PRINTFRONT"){
            if(dq.empty()) cout << "NONE" << endl;
            else
                cout << dq.front() << endl;
        }
    }
    return 0;
}