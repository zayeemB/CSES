#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    // 1. Read input parameters
    long long n;
    if (!(cin >> n)) return;

    vector<long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long steps = 0;

    for(int i = 0; i < n; i++){
        if(i > 0 && arr[i] < arr[i-1]){
            steps += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << steps << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Call the solver
    solve();

    return 0;
}