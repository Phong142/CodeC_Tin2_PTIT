#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int x[] = {-2, -2, 2, 2, -1, -1, 1, 1};
int y[] = {1, -1, -1, 1, 2, -2, -2, 2};

int xuly(pair <int, int> &start, pair <int, int> &end) {
    int f[15][15]={};
    pair <int, int> fr;
    queue <pair<int, int>> q;
    q.push(start);
    f[start.first][start.second] = 1;
    while(q.size()){
        fr = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            if(fr.first + x[i]<=8 && fr.first + x[i] >=1 && fr.second + y[i] <=8 && fr.second + y[i] >=1 && !f[fr.first + x[i]][fr.second + y[i]]){
                if(fr.first + x[i] == end.first && fr.second + y[i] == end.second) 
                    return f[fr.first][fr.second];
                f[fr.first + x[i]][fr.second + y[i]] = f[fr.first][fr.second] + 1;
                q.push({fr.first + x[i], fr.second + y[i]});
            }
        }
    }
    return 1;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s, t;
        cin >> s >> t;
        pair<int, int> start, end;
        start = {s[0]-'a'+1, s[1]-'0'};
        end = {t[0]-'a'+1, t[1]-'0'};
        if(start == end)
            cout << 0 << endl;
        else 
            cout << xuly(start, end) << endl;
    }
    return 0;
}