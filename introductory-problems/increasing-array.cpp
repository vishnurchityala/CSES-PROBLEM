#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n,0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    long long count = 0;
    for (int index = 1; index < n; index++){
        if (arr[index] < arr[index - 1]){
            count += arr[index-1] - arr[index];
            arr[index] = arr[index - 1];
        }
    }
    cout << count << endl;
    return 0;
}
