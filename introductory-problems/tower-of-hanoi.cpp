#include <bits/stdc++.h>
using namespace std;

void solve(int n, int from, int to, int dummy, vector<pair<int,int>>& moves) {
    if (n == 0) return;
    solve(n-1, from, dummy, to, moves);
    moves.push_back({from, to});
    solve(n-1, dummy, to, from, moves);
}


int main() {
    vector<pair<int,int>> moves;
    int n;
    cin >> n;
    int start = 1;
    int end = 3;
    int dummy = 2;
    solve(n,start,end,dummy,moves);
    cout << moves.size() << endl;
    for (auto move : moves) cout << move.first << " " << move.second << endl;
    return 0;
}
