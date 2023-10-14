// #include<bits/stdc++.h>
// using namespace std;
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
// #define ll long long
// #define endl "\n"
// #define ff first
// #define ss second
// #define pb push_back
// #define vi vector<int>
// #define rep(i,a,b) for(int i = a;i < b; i++)
// ll mod = 1e9+7;
// void solve() {
//     int n,k;
//     cin >> n >> k;
//     if(k > ceil((double)n/2))
//         cout << "-1" << endl;
//     else {
//         for(int i = 0; i < n; i++) { 
//             for(int j = 0; j < n; j++) {
//                 if(i == j && i%2 == 0 && k !=0) {
//                     cout << 'R';
//                     k--;
//                 }
//                 else
//                     cout << '.';
//             }
//             if(i!=n-1) 
//                 cout<<endl;
//         }
//     }
// }
// int main() {
//     fastio();
//     int t;
//     cin>>t;
//     for (int tt = 0; tt < t; ++tt) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long int 
// typedef long long ll ;
#define pb push_back  
#define tb cout << "\t\t"            // tab tab
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define pi pair<int, int>
#define snl cout << "\n"         // single new line  
#define ssp cout << " "          // single space
#define cp cout << "checkpoint - " << ++chckpnt << "\n"   // check point
// #define newtc cout << "------------------------\n"
#define newtc cout << "<><><><><><> TC = " << tc << " <><><><><><>\n"
using namespace std;
int mod = 1e9 + 7;

int casei(int tc)
{
    int n, z, i ;
    cin >> n ;
    vector<vector<int>> v(n) ; //, 3) ;
    for(i = 0 ; i < n ; i++)
    {
        // cin >> v[0] >> v[1] >> v[2] ;
        cin >> z ; v[i].push_back(z) ;
        cin >> z ; v[i].push_back(z) ;
        cin >> z ; v[i].push_back(z) ;
    }
    // for(i = 0 ; i < n ; i++) cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl ;
    // cout << "-----\n" ;
    int mn = INT_MAX, mx = INT_MIN, mnr = INT_MAX, mxr = INT_MIN, cost = 0, costr = 0, mni = -1, mxi = -1 ;
    for(i = 0 ; i < n ; i++)
    {
        if(v[i][0] < mn && v[i][1] > mx)
        {
            costr = cost ; mnr = mn ; mxr = mx ;
            cost = v[i][2] ; mn = v[i][0] ; mx = v[i][1] ;
            mxi = i ; mni = i ;
        }
        else
        {
            if(v[i][0] < mn)
            {
                cost += v[i][2] ;
                // mx = max(mx, v[i][1]) ;
                mn = min(mn, v[i][0]) ;
                mni = i ; 
            }
            else if(v[i][1] > mx)
            {
                cost += v[i][2] ;
                mx = max(mx, v[i][1]) ;
                // mn = min(mn, v[i][0]) ;
                mxi = i ;
            }
            else
            {
                if(v[i][0] == mn && v[i][1] == mx)
                {
                    if(cost > v[i][2])
                    {
                        mni = i ; mxi = i ;
                    }
                    cost = min(cost, v[i][2]) ;
                }
                else if(v[i][1] == mx)
                {
                    if(mni != mxi)
                    {
                        if((cost - v[mxi][2] + v[i][2]) < cost)
                        {
                            cost = cost - v[mxi][2] + v[i][2] ;
                            mxi = i ;
                        }
                        // else
                        // {
                        //     costr += 
                        // }
                    }
                }
                else if(v[i][0] == mn)
                {
                    
                    if(mni != mxi)
                    {
                        if((cost - v[mni][2] + v[i][2]) < cost)
                        {
                            cost = cost - v[mni][2] + v[i][2] ;
                            mni = i ;
                        }
                    }
                }
                // else
                // {
                //     costr += v[i]
                // }
            }
        }
        cout << cost << "\n" ;
    }
    return 0 ;
}
signed main()
{
        fast ;
  int tc, n ;
  cin >> tc ;
  n = tc ;
  while(tc--)
    casei(n - tc) ;
  return 0 ;
}