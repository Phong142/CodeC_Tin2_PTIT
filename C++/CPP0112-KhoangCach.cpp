#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double dd=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        cout << setprecision(4) << fixed << sqrt(dd);
        cout << endl;
    }
    return 0;
}