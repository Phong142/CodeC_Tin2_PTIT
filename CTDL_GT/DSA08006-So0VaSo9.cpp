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
        queue <int> q;
        q.push(9);
        while(1){
            int tmp=q.front();
            if(tmp%n==0){
                cout << tmp;
                break;
            }
            q.pop();
            q.push(tmp*10);
            q.push(tmp*10+9);
        }
        cout << endl;
    }
    return 0;
}