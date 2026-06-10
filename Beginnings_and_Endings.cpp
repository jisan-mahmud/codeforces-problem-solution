#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n;  i++){
            cin >> a[i];
        }

        unordered_map<int, vector<int>> idxs;

        

        for(int i = 0; i < n; i++){
            idxs[a[i]].push_back(i);
        }


        int ans = INT16_MAX;

        for(auto [key, values]: idxs){
            if(values.size() <= 1) continue;
            
            int first_idx = values.front();
            int last_idx = values.back();

            // cout << first_idx << last_idx  << endl;
            ans = min(ans, first_idx + (n - last_idx - 1));
        }
        if(ans == INT16_MAX){
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }
        
    }
    return 0;
}