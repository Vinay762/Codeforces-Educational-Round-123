#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
ll mod = 998244353;

ll xpown(ll x, ll n){
    ll res = 1;
    while(n > 0){
        if(n%2 == 1){
            res = (res*x)%mod;
            n--;
        }else{
            x = (x*x)%mod;
            n = n/2;
        }
    }
    return res;
}


void solve(){
    ll n,m,k,q;
    cin>>n>>m>>k>>q;
    vector<pair<ll,ll>>a(q);
    for(ll i = 0; i<q; i++){
        cin>>a[i].first>>a[i].second;
    }
    set<ll>r,c;
    ll cnt = 0;
    for(ll i = q-1; i>=0; i--){
        ll ri = a[i].first;
        ll ci = a[i].second;
        bool rc = false, cc = false;

        if(c.size() == m || r.count(ri))rc = true;
        if(r.size() == n || c.count(ci))cc = true;
        
        if(rc && cc)continue;
        cnt++;
        r.insert(ri);
        c.insert(ci);
    }
    ll ans = xpown(k,cnt);
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}