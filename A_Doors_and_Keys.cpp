#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve(){
    string s;
        cin>>s;
        unordered_set<char>st;
        for(int i = 0; i<6; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                st.insert(s[i]);
            }else{
                if(s[i] == 'R'){
                    if(!st.count('r')){
                        cout<<"NO"<<endl;
                        return;
                    }
                }else if(s[i] == 'G'){
                    if(!st.count('g')){
                        cout<<"NO"<<endl;
                        return;
                    }
                }else if(s[i] == 'B'){
                    if(!st.count('b')){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
        cout<<"YES"<<endl;
        return;
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