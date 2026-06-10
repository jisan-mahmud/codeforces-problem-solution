#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<long long>());

        if(n == 2){
            cout << a[0] << " " << a[1] << endl;
            continue;
        }

        long long f = a[0];
        long long s = a[1];

        bool flag = true;

        for(int i = 2; i < n; i++){
            long long nxt = f % s;

            if(nxt != a[i]){
                flag = false;
                break;
            }

            f = s;
            s = nxt;
        }

        if(flag){
            cout << a[0] << " " << a[1] << endl;
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}