#include <bits/stdc++.h>
using namespace std;

// Apple Divisions

long long solve(vector<long long>& apples, long long left, long long right, int index) {
    if (index == (int)apples.size()) 
        return abs(left - right);
    long long l = solve(apples, left + apples[index], right, index + 1);
    long long r = solve(apples, left, right + apples[index], index + 1);
    return min(l, r);
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(arr, 0, 0, 0) << endl;
    return 0;
}
