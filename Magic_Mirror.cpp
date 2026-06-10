#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n;  i++){
            cin >> a[i];
        }

        int x1 = a[(n-1)/2], x2 =a[(n)/2];

        bool isMirror = true;

        int i = 0, j = n - 1;

        while(i < j){
            if(x1 - a[i] != a[n-i-1] - x2) {
                isMirror = false;
                break;
            }
            i++;
            j--;
        }

        if(isMirror){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}