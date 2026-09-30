#include <bits/stdc++.h>    

using namespace std;

void solve() {
    // Read input parameters
    int n, m;
    cin >> n; cin >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    char options[4] = {'A', 'B', 'C', 'D'};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(auto option: options){
                char orig = grid[i][j];  

                if(
                    option != orig &&
                    (i-1 < 0 || option != grid[i-1][j]) &&
                    (j-1 < 0 || option != grid[i][j-1])
                ) {
                    grid[i][j] = option;
                    break;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j];
        }

        cout << "\n";
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