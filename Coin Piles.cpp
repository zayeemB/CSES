#include <bits/stdc++.h>    

using namespace std;

void solve() {
    // Read input parameters
    long long n;
    if (!(cin >> n)) return;

    vector<vector<int>> piles(n, vector<int>(2));

    for(int i = 0; i < n; i++){
        cin >> piles[i][0];
        cin >> piles[i][1];
    }

    for(auto &pile: piles){
        int first = pile[0];
        int second = pile[1];

        if(first < second)
            swap(first, second);

        int diff = first - second;

        if(second < diff) {
            cout << "NO\n";
        }

        else {
            first -= 2*diff;
            second -= diff;

            if(first % 3 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return;
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Call the solver
    solve();

    return 0;
}