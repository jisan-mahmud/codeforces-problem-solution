#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout << fixed << setprecision(a);

int main(){
    optimize();

    int n;
    cin >> n;

    vector<string> s(n);

    int m = 0;

    for(int i = 0; i < n; i++){
        cin >> s[i];

        m = max(m, (int)s[i].size());
    }

    reverse(s.begin(), s.end());

    for(int j = 0; j < m; j++){

        string ans;

        for(int i = 0; i < n; i++){
            if(j < s[i].size())
                ans += s[i][j];
            else
                ans += '*';
        }
        
        while (!ans.empty() && ans.back() == '*')
            ans.pop_back();

        cout << ans << '\n';
    }

    return 0;
}