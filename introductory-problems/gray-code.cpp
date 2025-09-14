#include <bits/stdc++.h>
using namespace std;

void solve(string s,unordered_set<string>&memo,vector<string>& result){
    int n = s.length();
    for (int index = 0; index < n; index++){
        char ch = s[index];
        char chn = ch == '1' ? '0' : '1';
        s[index] = chn;
        if (!memo.count(s)){
            result.push_back(s);
            memo.insert(s);
            solve(s,memo,result);
        }
        s[index] = ch;
    }
}

int main() {
    vector<string> result;
    unordered_set<string> memo;
    int n;
    cin >> n;
    string input = string(n,'0');
    solve(input,memo,result);
    for (auto str : result) cout << str << endl;
    return 0;
}
