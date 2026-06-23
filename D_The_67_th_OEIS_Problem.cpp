#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout << fixed << setprecision(a);


int main(){
    optimize();
    vector<long long> primes;
    for (int x = 2; primes.size() < 10005; x++) {
        bool ok = true;
        for (long long p : primes) {
            if (p * p > x) break;
            if (x % p == 0) {
                ok = false;
                break;
            }
        }
        if (ok) primes.push_back(x);
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << primes[i] * primes[i + 1];
            if (i + 1 < n) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}