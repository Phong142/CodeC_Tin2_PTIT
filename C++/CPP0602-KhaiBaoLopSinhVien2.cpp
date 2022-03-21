#include<bits/stdc++.h>

using namespace std;

class SinhVien {
    private:
        string name;
		string lop;
		string date;
		float gpa;
    public:
        friend istream &operator>>( istream  &input, SinhVien &a ) { 
        
            getline(input, a.name);
            getline(input, a.lop);
            getline(input, a.date);
            input >> a.gpa;
            return input;            
        }
        friend ostream &operator<<( ostream &output, SinhVien &a ) { 
            cout << "B20DCCN001 " << a.name << " " << a.lop << " ";
            if(a.date[2] != '/') a.date.insert(0,"0");
            if(a.date[5] != '/') a.date.insert(3,"0");
            cout << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
            return output;            
      }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
