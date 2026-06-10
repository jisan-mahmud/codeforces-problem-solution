#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long ans;

        if (b >= 3 * a) {
            ans = n * a;
        } else {
            ans = (n / 3) * b + min((n % 3) * a, b);
        }

        cout << ans << endl;
    }

    return 0;
}