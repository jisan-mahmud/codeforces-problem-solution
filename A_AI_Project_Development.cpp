#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout << fixed << setprecision(a);

int main(){
    optimize();

    int t;
    cin >> t;

    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;

  
        long long t1 = (n + x + y - 1) / (x + y);


        long long ai;

        if (x * z >= n) {
            ai = (n + x - 1) / x;
        } else {
            long long rem = n - x * z;
            long long rate = x + 10 * y;
            ai = z + (rem + rate - 1) / rate;
        }

        cout << min(t1, ai) << endl;
    }

    return 0;
}