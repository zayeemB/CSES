#include <bits/stdc++.h>    

using namespace std;

void solve() {
    // Read input parameters
    long long n;
    if (!(cin >> n)) return;

    long long mod = 1e9 + 7;

    long long count = 2;

    for(int i = 2; i <= n; i++){
        count = (count + count % mod) % mod;
    }

    cout << count % mod << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Call the solver
    solve();

    return 0;
}