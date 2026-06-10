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
        int n;
        cin >> n;

        if (n % 2 == 0){
            for (int i = 0; i < n; i += 2){
                cout << (i + 2) << ' ' << (i + 1) << ' ' << (i + 1) << ' ' << (i + 2) << ' ';
                cout << (i + 1) << ' ' << (i + 2) << ' ' << (i + 2) << ' ' << (i + 1) << ' ';
            }
        }
        else{
            cout << "3 3 2 1 1 2 1 2 2 3 1 3 ";
            for (int i = 3; i < n; i += 2){
                cout << (i + 2) << ' ' << (i + 1) << ' ' << (i + 1) << ' ' << (i + 2) << ' ';
                cout << (i + 1) << ' ' << (i + 2) << ' ' << (i + 2) << ' ' << (i + 1) << ' ';
            }
        }
        
        cout << endl;
    }

    return 0;
}