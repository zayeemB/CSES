#include <bits/stdc++.h>    

using namespace std;

void solve() {
    // 1. Read input parameters
    long long n;
    if (!(cin >> n)) return;

    auto count = [](long long n)->long long{
        long long n_seq = n*n;

        long long total = n_seq*(n_seq - 1)/2;

        long long attack_pairs = 4*(n-1)*(n-2);

        long long valid = total - attack_pairs;

        return valid;
    };

    for(int i = 1; i <= n; i++){
        cout << count(i) << '\n';
    }
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Call the solver
    solve();

    return 0;
}