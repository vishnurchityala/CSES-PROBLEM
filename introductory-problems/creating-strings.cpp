#include <bits/stdc++.h>
using namespace std;

void solve(string& c,string s,int& n,vector<bool>& taken,set<string>& result){
    if (static_cast<int>(s.length()) == n){
        result.insert(s);
        return;
    }
    for (int i = 0; i < n; i++){
        if (taken[i]) continue;
        taken[i] = true;
        s.push_back(c[i]);
        solve(c,s,n,taken,result);
        s.pop_back();
        taken[i] = false;
    }
}

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<bool> taken(n,false);
    set<string> result;
    string dummy = "";
    solve(s,dummy,n,taken,result);
    cout << result.size() << endl;
    for (auto s : result) cout << s << endl;
    return 0;
}
