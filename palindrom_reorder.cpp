#include <iostream>
#include <string>

using namespace std;

long chr_count[26];

int count_odd = 0;

void fill_zero() {
    for(int i = 0; i < 26; i++) {
        chr_count[i] = 0;
    }
}

void count_char(string t) {
    for(long i = 0; i < t.length(); i++) {
        int index = ((int)t[i]) - 65;
        chr_count[index] = chr_count[index] + 1;
        if(chr_count[index] % 2 != 0) {
            count_odd += 1;
        }
        else {
            count_odd -= 1;
        }
    }
}

int find_odd() {
    for(long i = 0; i < 26; i++) {
        if(chr_count[i] % 2 != 0) {
            return i;
        }
    }
    return -1;
}

void print_char(int index, long max_loop) {
    for(long i = 0; i < max_loop; i++) {
        cout << (char) (index + 65);
    }
}

void print_result(int odd_index) {
    for (int i = 0; i < 26; i++) {
        if(odd_index != i) {
            print_char(i, chr_count[i] / 2);
        }
    }

    print_char(odd_index, chr_count[odd_index]);

    for (int i = 25; i >= 0; i--) {
        if(odd_index != i) {
            print_char(i, chr_count[i] / 2);
        }
    }
}

int main(){ 
    string t;

    cin >> t;

    fill_zero();

    count_char(t);

    if(count_odd < 2) {
        int odd_index = find_odd();
        print_result(odd_index);

    }
    else {
        cout << "NO SOLUTION";
    }

    return 0;
}
