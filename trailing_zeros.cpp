#include<iostream>

using namespace std; 

int main() {
    long n;
    cin >> n;
    long count_zero = 0;
    while(n > 0) {
        n = n / 5;
        count_zero += n;
    }
    cout << count_zero;
    return 0;
}