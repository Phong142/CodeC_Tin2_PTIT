#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int m;
        cin >> m;
        queue <int> q;
        while(m--){
            int n;
            cin >> n;
            if(n==1){
                cout << q.size() << endl;
            }
            else if(n==2){
                if(q.empty())
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if(n==3){
                int tmp;
                cin >> tmp;
                q.push(tmp);
            }
            else if(n==4){
                if(q.empty()) continue;
                else q.pop();
            }
            else if(n==5){
                if(q.empty())
                    cout << -1 << endl;
                else
                    cout << q.front() << endl;
            }
            else if(n==6){
                if(q.empty())
                    cout << -1 << endl;
                else
                    cout << q.back() << endl;
            }
        }
        cout << endl;
    }
    return 0;
}