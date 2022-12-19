#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    long n;
    cin >> n;

    long input;

    long prev;

    long answer = 0;

    for (long i = 0; i < n; i++) {
        cin >> input;
        if(i == 0) {
            prev = input;
        }
        else {
            long diff = prev - input;
            if(diff > 0) {
                answer += diff;
            }
            else {
                prev = input;
            }
        }
    }

    cout << answer;

    return 0;
}