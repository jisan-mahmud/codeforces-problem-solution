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
        string s;
        cin >> s;
        
        int cnt4 = 0;
        int cnt2 = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '4') cnt4++;
            if(s[i] == '2') cnt2++;
        }

        int ans = cnt2;

        int cnt13 = 0;

        int newCnt2 = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1' || s[i] == '3') cnt13++;
            else if(s[i] == '2') newCnt2++;

            if(cnt13 + (cnt2 - newCnt2) < ans){
                ans = cnt13 + (cnt2 - newCnt2);
            }
        }

        cout << ans + cnt4 << endl;

       
    }

    return 0;
}