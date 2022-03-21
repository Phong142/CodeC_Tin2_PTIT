#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        cin >> s;
        int dem = 0, len = s.length();
        int max =-1;
        int k =-1;
        int note = -1;
        if(s[0] == '0') cout << -1;
        else{
	        for (int i=len-1; i>0; i--){
	        	if(s[i]<s[i-1]){
	        		note=i-1;
	        		dem++;
					break;	
	        	}
	        }
	        for (int i=len-1; i>note; i--){
		        if(s[i] - 48 >= max && s[i]< s[note]){
					max = s[i]-48;
					k=i;	
				}
			}
			swap(s[note], s[k]);
	        if(dem == 1 && s[0] != '0')
	        	for (int i=0; i<len; i++)
	        		cout << s[i];
	        else cout << -1;
        }
        cout << endl;
    }
    return 0;
}