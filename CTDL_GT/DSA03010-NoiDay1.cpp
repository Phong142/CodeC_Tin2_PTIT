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
        priority_queue <long long, vector<long long>, greater <long long>> q;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            q.push(tmp);
        }
        long long sum=0;
        while(q.size()>1){
            long long x=q.top(); q.pop();
            long long y=q.top(); q.pop();
            q.push(x+y);
            sum+=(x+y);
        }
        cout <<  sum << endl;
    }
    return 0;
}