#include <iostream>
#include <string>

using namespace std;

void generate(int n, string result, string z, string o, bool isSwitch) {
    if(n == 0) {
        if(result.empty()) {
            cout << "0\n";
            return;
        }
        cout << result << "\n";
        return;
    }
    if(!isSwitch) {
        generate(n-1, result + z, z, o, false);
        generate(n-1, result + o, o, z, true);
    }
    else {
        generate(n-1, result + o, o, z, false);
        generate(n-1, result + z, z, o, true);
    }
   
    
}

int main() {
    int n;
    cin >> n;

    generate(n, "", "0", "1", false);

    return 0;
}