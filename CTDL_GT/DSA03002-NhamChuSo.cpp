#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int maxx(string s1){
    int a=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='5')
            s1[i]='6';
        a=a*10+(s1[i]-'0');
    }
    return a;
}
int minn(string s1){
    int a=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='6')
            s1[i]='5';
        a=a*10+(s1[i]-'0');
    }
    return a;
}
int main() {
    faster;
    string n,m;
    cin >> n >> m;
    cout << minn(n)+minn(m) << " " << maxx(n)+maxx(m);
    return 0;
}