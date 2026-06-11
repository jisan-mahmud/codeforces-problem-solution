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
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        int k = 0;

        for(int i = 0; i < n - 1; i++){
            if(a[i] > a[i+1]) {
                k = max(k, a[i] - a[i+1]);
            }
        }

        for(int i = 1; i < n; i++){
            if(a[i-1] > a[i]){
                a[i] += k;
            }
        }

        bool flag = true;

        for(int i = 0; i < n - 1; i++){
            if(a[i] > a[i+1]) {
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}