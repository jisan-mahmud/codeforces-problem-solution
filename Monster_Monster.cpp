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
        long long n, x;
        cin >> n >> x;

        vector<long long> ph(n);

        for(int i = 0; i < n; i++){
            cin >> ph[i];
        }

        sort(ph.begin(), ph.begin() + n, greater<long long>());

        for(int i = 1; i < n; i++){
            ph[i] = x * i + ph[i];
        }

        sort(ph.begin(), ph.begin() + n);

        cout << ph[n-1] << endl;

    }

    return 0;
}