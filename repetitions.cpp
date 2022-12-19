#include<iostream>
#include<string>

using namespace std;

int main() {
    int count = 0;
    int bst = -1;
    char c = '1';
    char pc = '1';
    char bc = '1';

    string t;

    cin >> t;

    c = t[0];
    pc = t[0];
    count++;

    for (int i = 1; i < t.length(); i++){
        c = t[i];
        if(pc == c) {
            count++;
            pc = t[i];
        }
        else {
            if(count > bst) {
                bst = count;
                bc = pc;
            }
            pc = t[i];
            count = 1;
        }
    }

    if(count > bst) {
        bst = count;
        bc = pc;
    }

    cout << bst;

    return 0;
}