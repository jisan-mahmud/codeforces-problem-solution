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
        int n, m;
        cin >> n >> m;

        vector<int> odd, even;

        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(i % 2) odd.push_back(x);
            else even.push_back(x);
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        bool podd = false, peven = false;

        while(m--){
            int q; cin >> q;

            if(q % 2){
                if(!odd.empty() and !(odd.back() < 0 and podd)){
                    odd.pop_back();
                    podd = true;
                }
            }else{
                if(!even.empty() and !(even.back() < 0 and peven)){
                    even.pop_back();
                    peven = true;
                }
            }
        }

        long long ans = accumulate(odd.begin(), odd.end(), 0ll) + accumulate(even.begin(), even.end(), 0ll);
        cout << ans << endl;
    }

    return 0;
}