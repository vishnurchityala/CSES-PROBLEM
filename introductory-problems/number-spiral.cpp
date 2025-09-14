#include <bits/stdc++.h>
using namespace std;

int main() {
    long long testCases;
    cin >> testCases;
    while (testCases--) {
        long long row, col;
        cin >> row >> col;
        long long layer = max(row, col) - 1;
        long long layerStart = layer * layer;
        if (layer % 2 == 0) {
            cout << layerStart + (col + (layer + 1 - row)) << endl;
        } else {
            cout << layerStart + (row + (layer + 1 - col)) << endl;
        }
    }
    return 0;
}
