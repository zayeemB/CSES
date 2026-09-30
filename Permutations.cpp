#include <bits/stdc++.h>    

using namespace std;

void solve() {
    // 1. Read input parameters
    long long n;
    if (!(cin >> n)) return;

    vector<int> res;

    for(int i = 2; i <= n; i+=2){
        if(!res.empty() && abs(i-res.back()) <= 1){
            cout << "NO SOLUTION\n";
            return;
        }
        
        res.push_back(i);
    }

    for(int i = 1; i <= n; i+=2){
        if(!res.empty() && abs(i-res.back()) <= 1){
            cout << "NO SOLUTION\n";
            return;
        }
        
        res.push_back(i);
    }
    
    for(auto num: res)
        cout << num << " ";
    
    cout << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Call the solver
    solve();

    return 0;
}