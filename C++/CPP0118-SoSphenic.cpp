#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int check(int n){
    int check = 0, k = 0;
    for(int i = 2; i <=n;i++){
        int dem = 0;
        while(n%i==0){
            dem++; k++;
            if(dem > 1){
                check = 1;
                break;
            }
            n /=i;
        }
        if(check == 1) return 0;
    }
    if(check ==  0 && k == 3) return 1;
    return 0;
}

int main(){
    faster;
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        cout <<check(n) << endl;
    }
}