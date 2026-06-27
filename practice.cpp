#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout << fixed << setprecision(a);

const int mx = 1e7;

int cnt[mx];

int main(){
    optimize();

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i){
            cnt[j]++;
        }
    }

    for(int i = 1; i <= n; i++){
        cout << i << ": " << cnt[i] << endl;
    }

    return 0;
}