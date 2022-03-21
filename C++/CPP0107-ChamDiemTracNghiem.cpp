#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        char m101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
        char m102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
        char solve[15];
        int count=0;
        cin >> n;
        cin.ignore();
        for(int i=0; i<15; i++){
            cin >> solve[i];
        }
        if(n==101){
            for(int i=0;i<15;i++){
            if(m101[i]==solve[i]) count++;
            }
        }
        else if(n==102){
            for(int i=0;i<15;i++){
            if(m102[i]==solve[i]) count++;
            }
        }
        float diem=(float(2)/float(3))*(float)count;
        cout << setprecision(2) << fixed << diem << endl;
    }
    return 0;
}

