#include <iostream>

using namespace std;

int main() {

    long n;

    cin >> n;

    long result = 1;
    long b = 1000000007;

    for (long i = 1; i <= n; i++) {
        result = (result * 2);
        if(result > b) {
            result = result % b;
        }
       
    }

    cout << result;

    return 0;
}