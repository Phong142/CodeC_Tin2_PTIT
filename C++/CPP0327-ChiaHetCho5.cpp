// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// void check(){
//     string s;
//     int temp2 = 0, temp = 0;
//     cin >> s;
//     for(int i = s.length()-1; i >= 0;i--){
//         if(s[i] == '1'){
//             if(temp % 4 == 0) temp2 += 1;
//             else if(temp % 4 == 1) temp2 += 2;
//             else if(temp % 4 == 2) temp2 += 4;
//             else if(temp % 4 == 3) temp2 += 3;
//         }
//         temp++;
//     }
//     if(temp2 % 5 == 0) cout << "Yes" << endl;
//     else cout << "No" << endl;
// }
// int main(){
//     faster;
//     int test;
//     cin >> test;
//     while(test--){
//         check();
//     }
// }


#include<bits/stdc++.h> 
using namespace std; 

string s; 
int t,i,temp,temp2; 

void process(){ 
	int r=0; 
	cin>>s; 			//1010
	for(i=0;i<s.size();i++){ 
		s[i]-='0';
		r=(2*r+s[i])%5;			//r la so du cua s khi chia cho 5
	} 							// tinh r tu dau den cuoi, neu bang 0 thi chia het cho 5
	if(r==0) 
	cout<<"Yes"; 
	else cout<<"No"; 
	cout<<endl;
} 
int main(){ 
	cin>>t; 
	while(t--){ 
		process(); 
	} 
	return 0; 
}