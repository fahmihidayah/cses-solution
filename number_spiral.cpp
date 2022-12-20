#include <iostream>

using namespace std;

int main() {

    long n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        long x, y;
        cin >> y >> x;
        long vl = 0;
        if (x > y) {
            if (x % 2 == 0) {
                vl = ((x-1) * (x-1)) + 1 + (y - 1);
            }
            else {
                vl = (x * x) - (y - 1);
            }
        }
        else {
            if (y % 2 == 0) {
                vl = (y * y) - (x - 1);
            }
            else {
                vl = ((y-1) * (y-1)) + 1 + (x - 1);
            }
        }
        cout << vl << "\n";
    
    }

    return 0;
}