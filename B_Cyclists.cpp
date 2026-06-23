#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout << fixed << setprecision(a);

int main(){
    optimize();

    int t;
    cin >> t;

    while(t--){
        long long n, k, p, m;

        cin >> n >> k >> p >> m;

        long long a[n+1];

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        long long A = 0, B = 0;

        if(p > k){
            
            vector<long long> v;

            for(int i = 1; i < p; i++){
                v.push_back(a[i]);
            }

            sort(v.begin(), v.end());

            for(int i = 0; i < p - k; i++){
                A += v[i];
            }
        }

        vector<long long> v;

        for(int i = 1; i <= n; i++){
            if(p != i) v.push_back(a[i]);
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n - k; i++){
            B += v[i];
        }

        long long first = A + a[p];

        if(first > m){
            cout << 0 << endl;
            continue;
        }

        long long cycle = B + a[p];

        int ans = 1;

        m -= first;

        ans += m / cycle;

        cout << ans << endl;

    }

    return 0;
}