#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long possibles = 1;
    int mod = 1e9 + 7;
    while (n--) possibles = (possibles*2)%mod;
    cout << possibles << endl;
    return 0;
}
