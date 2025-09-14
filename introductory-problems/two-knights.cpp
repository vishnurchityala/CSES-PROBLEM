#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; k++){
        if (k == 1){
            cout << 0 << endl;
            continue;
        }
        long long t = k*k;
        long long totalWays = (t*(t-1))/2;
        long long blocks = (k-1)*(k-2)*4;
        cout << totalWays - blocks << endl;
        
    }
    return 0;
}
