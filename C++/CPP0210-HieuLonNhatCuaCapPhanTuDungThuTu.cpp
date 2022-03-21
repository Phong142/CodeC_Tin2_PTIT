#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        for(int i = 0; i < n;i++) cin >> a[i];
        int check = 0, kq = a[1]-a[0];
        for(int i = 0; i < n-1;i++){
            for(int j = i+1; j < n;j++){
                if(kq < (a[j]-a[i])){
                    check = 1;
                    kq = a[j]-a[i];
                }
            } 
       }
       if(check == 1) cout << kq << endl;
       else cout << kq << endl;
    }
}