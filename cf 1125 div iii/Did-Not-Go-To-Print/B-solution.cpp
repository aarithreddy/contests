#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <array>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <tuple>
#include <utility>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <climits>
#include <functional>
 
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
 
 
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define repr(i, a, b) for (int i = (a); i >= (b); i--)
 
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
 
 
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void submit() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> flag;
    for(int i = 0; i < n; i++){flag.pb(0);}
    
    stack<int> t;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            t.push(i);
        }
        else if(s[i] == '2'){
            if(t.empty()){
                flag[i] = 1;
            }
            else{
                flag[t.top()] = 1;
                t.pop();
            }
        }
        else{
            flag[i] = 1;
        }
    }
    
    ll count = 0;
    for(int i = 0; i < n; i++){
        if(flag[i] == 0){
            count++;
        }
    }
    
    cout << count << '\n';
    for(int i = 0; i < n; i++){
        if(flag[i] == 0){
            cout << i + 1 << " ";
        }
    }
    cout << '\n';
}
 
int main() {
    fastIO();
 
    int t;
    cin >> t;
    while (t--) {
        submit();
    }
 
    return 0;
}
