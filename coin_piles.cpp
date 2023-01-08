#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    long n; 
    cin >> n;

    for (long i = 0; i < n; i++) {
        long l,r;
        cin >> l >> r;
        long mx_v = max(l,r);
        long mn_v = min(l,r);

        if((l+r) % 3 == 0 && (mn_v * 2 >= mx_v)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }

    return 0;
}