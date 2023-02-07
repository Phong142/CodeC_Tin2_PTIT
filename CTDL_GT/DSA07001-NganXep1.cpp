#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    string s;
    int a[201];
    int count=-1;
    while(cin >> s){
        if(s=="push"){
            count++;
            cin >> a[count];
        }
        else if(s=="pop"){
            if(count>=0)
                count--;
        }
        else if(s=="show"){
            if(count>=0){
                for(int i=0; i<=count; i++)
                    cout << a[i] << " ";
                cout << endl;
            }
            else    
                cout << "empty" << endl;
        }
    }
    return 0;
}