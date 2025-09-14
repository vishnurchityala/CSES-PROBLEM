#include <bits/stdc++.h>
using namespace std;

// Chessboard and Queens

void solve(int row, vector<vector<char>>& maze,vector<pair<int,int>>& placements,int& count){
    // checking for base case
    if (row == 8){
        count++;
        return;
    }
    // checking for all placements in column
    for (int i = 0; i < 8; i++){
        // check empty column
        if (maze[row][i] == '.'){
            bool canPlace = true;
            for (auto placement : placements){
                int nrow = placement.first;
                int ncol = placement.second;
                // checking diagonal or same col
                if (abs(nrow-row) == abs(ncol-i) || ncol == i){
                    canPlace = false;
                    break;
                }
            }
            if (canPlace){
                // recursively trying next row
                placements.push_back({row,i});
                solve(row+1,maze,placements,count);
                placements.pop_back();
            }
        }
    }

    
}

int main() {
    vector<vector<char>> maze(8,vector<char>(8));
    for (int i = 0; i < 8; i++) for (int j = 0; j < 8; j++) cin >> maze[i][j];
    int count = 0;
    vector<pair<int,int>> placements;
    solve(0,maze,placements,count);
    cout << count << endl;
    
}
