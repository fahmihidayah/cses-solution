#include <iostream>

using namespace std;

int main() {

    long n;

    cin >> n;

    if(n == 1) {
        cout << "1";
    }
    else if(n <= 3) {
        cout << "NO SOLUTION";
    }
    else {
        for (long i = 2; i <= n; i+=2) {
            cout << i << " ";
        }

        for (long i = 1; i <= n; i+=2) {
            cout << i << " ";
        }

        
    }

    return 0;
}