#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++){
            a[i] = i+1;
        }
        sort(a,a+n,greater<int>());
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
            swap(a[0],a[i+1]);
        }
    }
    return 0;
}