#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
#define all(a) a.begin(),a.end()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using ll = long long;
using pii = pair<int,int>;
const int inf = 1e9;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i ++) cin >> a[i];
    int x = - 1, mi = inf;
    for(int i = 1; i + k <= n; i ++){
        if(a[i + k] - a[i] < mi){
            mi = a[i + k] - a[i];
            x = (a[i + k] + a[i]) / 2;
        }
    }
    cout << x << "\n";
}

int main()
{
    ios;
    int _ = 1;
    cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}
