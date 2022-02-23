#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin>>t;
    while(t-->0){
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n+1);
        vector<ll>s(n+1,0);
        vector<ll>mx(n+1,-1*1e12);
        for(ll i = 1; i<=n; i++){
            cin>>a[i];
            s[i] = s[i-1]+a[i];
        }
        for(ll i = 1; i<=n; i++){
            for(ll j = i; j<=n; j++){
                mx[j-i+1] = max(mx[j-i+1], s[j]-s[i-1]);
            }
        }
        for(ll k = 0; k<=n; k++){
            ll ans = 0;
            for(ll len = 1; len <= n; len++){
                ans = max(ans,mx[len]+min(len,k)*x);
            }
            cout<<ans<<' ';
        }
        cout<<endl;
    }
    return 0;
}