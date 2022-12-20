#include <iostream>
#include <vector>

using namespace std;

long count_total(long number) {
    return number * (number + 1) / 2;
}

long count_total_pair(long number) {
    return number + 1;
}

void print_vector(vector<long> vctr) {
    for(long i = 0; i < vctr.size(); i++) {
        cout << vctr[i] << " ";
    }
}

int main() {
    long num;

    cin >> num;

    long total = count_total(num);

    if(total % 2 == 1) {
        cout << "NO";
    }
    else {
        vector<long> first_set;
        vector<long> second_set;
        cout << "YES";
        long half = total / 2;
        long min = 1;
        long max = num;
        long i = 0;
        while(half > 0) {
            if (i % 2 == 0) {
                first_set.push_back(max);
                half -= max;
                max -= 1;

            }
            else {
                first_set.push_back(min);
                half -= min;
                min += 1;
            }
            i++;
        }

        cout << "\n";

        while(min <= max) {
            second_set.push_back(min);
            min += 1;
        }   
        cout << first_set.size() << "\n";
        print_vector(first_set);
        cout << "\n";
        cout << second_set.size() << "\n";
        print_vector(second_set);
        
    }



    return 0;
}