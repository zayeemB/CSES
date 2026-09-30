#include <bits/stdc++.h>    

using namespace std;

void solve() {
    // 1. Read input parameters
    long long n;
    if (!(cin >> n)) return;

    vector<long long> arr(n-1);

    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    long long sum = 0;

    for(auto num: arr)
        sum += num;

    long long res = n * (n+1)/2 - sum;

    cout << res << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Call the solver
    solve();

    return 0;
}