#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int cnt[1001]={}, check=1;
        for(int i=0; i<s.size(); i++)
            cnt[s[i]]++;
        for(int i='a'; i<='z'; i++){
            if(cnt[i]>(s.size()+1)/2){
                check=-1;
                break;
            }
        }
        cout << check;
        cout << endl;
    }
    return 0;
}