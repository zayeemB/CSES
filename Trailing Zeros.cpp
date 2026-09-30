#include <bits/stdc++.h>    

using namespace std;

void solve() {
    // Read input parameters
    int n;
    if (!(cin >> n)) return;

    auto countFactors = [&n](int num, int p)->int{
        int count = 0;
        long long power = p;
        while(power <= n){
            count += num/power;
            power *= p;
        }

        return count;
    };

    int twos = countFactors(n, 2);
    int fives = countFactors(n, 5);

    cout << min(twos, fives) << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Call the solver
    solve();

    return 0;
}