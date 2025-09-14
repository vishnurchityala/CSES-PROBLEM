#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long targetSum = 1LL * n * (n + 1) / 2;

    if (targetSum % 2) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    targetSum /= 2;

    vector<int> set1, set2;
    long long sum1 = 0;

    for (int num = n; num >= 1; num--) {
        if (sum1 + num <= targetSum) {
            set1.push_back(num);
            sum1 += num;
        } else {
            set2.push_back(num);
        }
    }

    cout << set1.size() << endl;
    for (int x : set1) cout << x << " ";
    cout << endl;

    cout << set2.size() << endl;
    for (int x : set2) cout << x << " ";
    cout << endl;

    return 0;
}
