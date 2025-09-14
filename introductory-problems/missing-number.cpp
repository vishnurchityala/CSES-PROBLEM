#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long total = (long long)n * (n + 1) / 2;
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        total -= x;
    }
    cout << total << endl;
    return 0;
}
