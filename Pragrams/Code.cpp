#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define llu unsigned long long int
#define pb pop_back
#define mpb mp.find(i)
#define mpe mp.end()
#define umap unordered_map<int,int>
#define vec vector<int> 
#define endl "\n"
const int MOD = 1000000007;
const int MX = 100001;
using namespace std;
void solve() {
    ll n , m;
    cin >> n >> m;
    int ans = 0;
    int inverse = 1, stk = 0;
    while(ans!=n){
        if((ans+inverse)<=n){
            ans=ans+inverse;
            inverse=ans;
        }
        else if((ans+inverse)>n){
            int poi=n-inverse;
            ans=ans+poi;
            inverse-=poi;
            inverse+=ans;
        }
        stk++;
        if(stk>m){
            cout<<0<<endl;
            return;
        }
    }
    cout<<m-stk+1<<endl;
}
int main() { 
    fastio();

    int t;
    cin>>t;
    while (t--) {
        solve();
    } 
    return 0; 
}
