#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;

        long long a[n];
        long long mn = LLONG_MAX, mx = LLONG_MIN;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
        
        cout << (mx - mn + 1) / 2 << endl;

    }
    return 0;
}