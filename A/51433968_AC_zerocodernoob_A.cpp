#include <iostream>
#include <vector>

using namespace std;

int find_x_for_n(int n) {
    int k = 2;
    while (true) {
        int power_sum = (1 << k) - 1; 
        if (n % power_sum == 0) {
            return n / power_sum;
        }
        k++;
    }
}

int main() {
    int t;
    cin >> t;
    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        results.push_back(find_x_for_n(n));
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
