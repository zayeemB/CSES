#include <bits/stdc++.h>  

using namespace std;

void solve() {
    string in;

    cin >> in;

    long long l = 0, r = 0;

    vector<int> freq(26, 0);
    unordered_set<char> st;

    long long maxSeq = LLONG_MIN;

    while(r < (int) in.size()){
        char c = in[r];
        
        freq[c-'A']++;
        st.insert(c);

        while(st.size() > 1){
            freq[in[l]-'A']--;

            if(freq[in[l]-'A'] == 0){
                st.erase(in[l]);
            }

            l++;
        }

        maxSeq = max(maxSeq, r-l+1);

        r++;
    }

    cout << maxSeq << '\n';
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Call the solver
    solve();

    return 0;
}