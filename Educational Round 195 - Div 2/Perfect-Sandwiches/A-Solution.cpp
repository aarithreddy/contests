#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using VLL = vector<LL>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
/*
NOTES:
 
 
*/
 
int main(){
    LL t;
    cin >> t;
    while(t--){
        LL a, b;
        cin >> a >> b;
        
        if(b >= a){
            cout << -1 << '\n';
        }
        else{
            LL count = 0;
            while(a > 0 && b > 0 && a > b){
                count++;
                a -= 2;
                b--;
            }
            cout << count << '\n';
        }
        
        // cout << (b > a ? -1 : (b / gcd(a, b))) << '\n';
    }
    return 0;
}