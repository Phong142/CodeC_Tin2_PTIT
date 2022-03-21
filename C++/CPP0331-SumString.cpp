#include <bits/stdc++.h>  
using namespace std; 
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
int num(char c){
	return c - '0';
}
 
string add(string a, string b){
	if(sz(a) < sz(b)) swap(a, b);
	int len1 = sz(a), len2 = sz(b);
	string res ="";
	reverse(all(a)); reverse(all(b));
	b += string(len1-len2,'0');
	int carry = 0;
	for(int i = 0 ; i < len1 ; i++){
		int tmp = num(a[i]) + num(b[i]) + carry;
		res += (char)('0' + tmp % 10);
		carry = tmp / 10;
	}
	if(carry)
		res += (char)('0' + carry);
	reverse(all(res));
	return res;
}
 
bool check1(string s, int left, int len1, int len2){
	string s1 = s.substr(left, len1);
	string s2 = s.substr(left + len1, len2);
	string s3 = add(s1, s2);
	if(sz(s3) >sz(s) - sz(s1) - left - sz(s2)) return 0;
	if(s.substr(left + len1 + len2, sz(s3)) == s3){
		if(left + len1 + len2 + sz(s3) == sz(s)) return 1;
		return check1(s, left + len1, len2, sz(s3));
	}
	return 0;
}
 
void check2(){
	string s; cin >> s;
	bool ok = 0;
	for(int i = 1; i< s.length(); i++){
		for(int j = 1 ; j < s.length() - i; j++){
			if(check1(s, 0, i, j)){
				cout <<"Yes\n";
				return ;
			}
		}
	}
	cout << "No\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		check2();
	}
}