#include<bits/stdc++.h>

using namespace std;

class SinhVien {
    public:
        string name, lop, date;
        float GPA;
        void nhap() {
            getline(cin, name);
            getline(cin, lop);
            getline(cin, date);
            scanf("\n");
            cin >> GPA;
        }
        void xuat() {
            cout << "B20DCCN001 "  << name << " "<< lop << " ";
            if(date[2] != '/') date.insert(0,"0");
            if(date[5] != '/') date.insert(3,"0");
            cout << date << " " << fixed << setprecision(2) << GPA << endl;
        }
}; 

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}