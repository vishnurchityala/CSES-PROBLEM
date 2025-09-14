#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int left = 0;
    int maxLen = 0;
    for (int right = 0; right < str.length(); right++){
        if (right > 0 && str[right] != str[right-1]) left = right;
        maxLen = max(maxLen,right - left + 1);
    }
    cout << maxLen << endl;
    return 0;
}
