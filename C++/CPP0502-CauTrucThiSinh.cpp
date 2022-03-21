#include<bits/stdc++.h>

using namespace std;

struct ThiSinh {
    string ten;
    string ntn;
    float a, b, c;
};

void nhap(ThiSinh &A){
    getline(cin, A.ten);
    getline(cin, A.ntn);
    cin >> A.a >> A.b >> A.c;
}

void in (ThiSinh &A){
    float kq = A.a + A.b +A.c;
    cout << A.ten << " " << A.ntn << " " << fixed << setprecision(1) << kq;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}