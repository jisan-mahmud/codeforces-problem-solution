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
        int n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;

        int w1 = abs(x1 - x2);
        int w2 = abs(n - w1);

        if(n <= 3) k = 0;

        cout << min(w1, w2) + k << endl;
    }

    return 0;
}