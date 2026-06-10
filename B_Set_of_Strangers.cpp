#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> color(n, vector<int>(m));

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> color[i][j];

        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        unordered_map<int, int> cnt;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int c = color[i][j];
                if(cnt.count(c) && cnt[c] == 2) continue; 

                bool valid = true;
                for(int d = 0; d < 4; d++){
                    int ni = i + dx[d];
                    int nj = j + dy[d];
                    if(ni >= 0 && ni < n && nj >= 0 && nj < m){
                        if(color[ni][nj] == c){
                            valid = false;
                            break;
                        }
                    }
                }

                if(!valid)
                    cnt[c] = 2;
                else
                    cnt[c] = max(cnt[c], 1);
            }
        }

        int totalSum = 0;
        for(auto& p : cnt) totalSum += p.second;

   
        int ans = INT_MAX;
        for(auto& p : cnt){
            ans = min(ans, totalSum - p.second);
        }

        cout << ans << "\n";
    }
    return 0;
}