#include<iostream>

using namespace std;

int main() {
    long nm;

    long total = 0;

    cin >> nm;

    for (long i = 0; i < nm - 1; i++){
        long input;
        cin >> input;
        total += input;
    }

    cout << (nm * (nm + 1) / 2) - total;

    return 0;
}