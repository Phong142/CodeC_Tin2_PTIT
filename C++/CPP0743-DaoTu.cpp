#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string myStr;
        getline(cin, myStr);
        int n = myStr.size();
        int i, j = n - 1;
        for (i = n - 1; i >= 0; i--)
        {
            if (myStr[i] == ' ')
            {
                for (int pos = i + 1; pos <= j; pos++)
                    cout << myStr[pos];
                j = i - 1;
                cout << " ";
            }
            if (i == 0)
            {
                for (int pos = i; pos <= j; pos++)
                    cout << myStr[pos];
            }
        }
        cout << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while (t--){
// 		scanf("\n");
// 		vector <string> a;
// 		string s,token;
// 		getline(cin,s);
// 		stringstream ss(s);
// 		while (ss >> token){
// 			a.push_back(token);
// 		}
// 		for (int i=a.size()-1; i>=0; i--) cout << a[i] << " ";
// 		cout <<endl;
// 	}
// }