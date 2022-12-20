#include <iostream>

using namespace std;

long count_posibility(long n) {
    long minusone = (n * n) - 1;
    return minusone * (minusone + 1) / 2;
}

long count_forbiden_move(long n) {
    if( n < 3 ) {
        return 0;
    }
    else {
        return (n - 1) * 2 * (n - 2) * 2;
    }
    
}   

int main() {
    long n;

    cin >> n;

    for (long i = 1; i <= n; i++) {
        
        cout << count_posibility(i) - count_forbiden_move(i) << "\n";
    }

    return 0;
}