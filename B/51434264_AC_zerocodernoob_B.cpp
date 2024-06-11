#include <iostream>
#include <vector>
using namespace std;

void solve(int n) {
    if ((n / 2) % 2 != 0) {
        // If n/2 is odd, it's impossible to balance
        cout << "NO" << endl;
        return;
    }

    vector<int> result(n);
    int half = n / 2;


    for (int i = 0; i < half; ++i) {
        result[i] = 2 * (i + 1);
    }


    for (int i = 0; i < half - 1; ++i) {
        result[half + i] = 2 * i + 1;
    }

    result[n - 1] = 3 * half - 1;

    cout << "YES" << endl;
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
