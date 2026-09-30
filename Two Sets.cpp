#include <bits/stdc++.h>    

using namespace std;

void solve() {
    // Read input parameters
    int n;
    if (!(cin >> n)) return;

    long long sum = 1LL*n*(n+1)/2;

    if(sum % 2 == 1){
        cout << "NO" << "\n";
        return;
    }

    long long target = sum/2;

    vector<int> set1, set2;

    for(int i = n; i > 0; i--){
        if(i <= target){
            set1.push_back(i);
            target -= i;
        }
        else set2.push_back(i);
    }

    cout << "YES\n" << set1.size() << "\n";

    for(auto num: set1)
        cout << num << " ";
    
    cout << "\n" << set2.size() << "\n";

    for(auto num: set2)
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