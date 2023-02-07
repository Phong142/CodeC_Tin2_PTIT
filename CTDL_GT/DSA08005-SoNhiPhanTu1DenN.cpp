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
        queue <string> q;
        q.push("1");
        while(n--){
            string tmp=q.front();
            cout << tmp << " ";
            q.pop();
            q.push(tmp+"0");;
            q.push(tmp+"1");
        }
        cout << endl;
    }
    return 0;
}