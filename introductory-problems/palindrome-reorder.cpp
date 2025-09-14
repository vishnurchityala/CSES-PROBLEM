#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> freq(26,0);
    for (char c : s){
        freq[c-'A']++;
    }
    int odd_index = -1;
    int odd_count = 0;
    for (int index = 0; index < 26; index++) {
        if (freq[index]%2 != 0)
        { 
            odd_index = index;
            odd_count++;
        }
    }
    if (odd_count > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string left = "";
    string middle = "";
    string right = "";
    for (int index = 0; index < 26; index++){
        if (index == odd_index && freq[odd_index]%2 == 1){
            middle = string(freq[index],'A'+index);
        }
        else{
            left += string(freq[index]/2,'A'+index);
        }
    }
    right = left;
    reverse(right.begin(),right.end());
    cout << left + middle + right << endl;
    
    return 0;
}
