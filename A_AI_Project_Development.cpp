#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;


        long long ans1 = ceil((double)n / (x + y));


        long long ans2;
       
        long long rem = n - z * x;
        ans2 = z + ceil((double)rem / (x + 10 * y));


        cout << min(ans1, ans2) << "\n";
    }
}