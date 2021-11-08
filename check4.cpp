/**
 *    author:  Tyrant67
 *    created: 08.11.2021       
**/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
const int mod = 1e9 + 7;
const int MAXN = 2e6;
const int inf = 0x3f3f3f3f;    
 
void IO(){
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve(){
    ll n; cin>>n;
    ll arr[n];
    if(n==1) cout<<1;
    else if(n==2 || n==3) cout<<"NO SOLUTION";
    else if(n==4) cout<<2<<" "<<4<<" "<<1<<" "<<3;
    else {
        vector<ll> v;
        for(ll i=1;i<=n;i+=2){
            v.pb(i);
        }
        for(ll i=2;i<=n;i+=2){
            v.pb(i);
        }
 
        for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
 
 
    // hope
}
 
 
signed main(){
    IO();
    int tc; tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
    // hope
    return 0;
}