#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout << fixed << setprecision(a);

bool isPalindrome(long long x) {
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int main(){
    optimize();

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        bool found = false;

        for (long long a = 0; a <= n; a++) {
            long long b = n - a;

            if (isPalindrome(a) && b % 12 == 0) {
                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }

        if (!found) cout << -1 << "\n";
    }

    return 0;
}