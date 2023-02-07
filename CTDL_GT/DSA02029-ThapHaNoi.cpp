#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void thn(int n, char a, char b, char c){
    if(n==1){
        cout << a << " -> " << c << endl;
        return;
    }
    thn(n-1, a, c, b);
    thn(1, a, b, c);
    thn(n-1, b, a, c);
}

int main() {
    faster;
    int n;
    cin >> n;
    char a='A', b='B', c='C';
    thn(n, a, b, c);
    return 0;
}

