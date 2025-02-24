#include "bits/stdc++.h"
#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define repp(i,a,n) for(int i=(a); i*i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define pb     push_back
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));

using namespace std;
#define bin(x,y)  bitset<y>(x) 
int INF = 998244353;      // Hardcoded, directly change from here for functions!
int MOD = 1e9+7 ;
void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}

// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
bool cmp(pair<int,int> a , pair<int , int> b){
	if( (a.second) == (b.second) ){
		return a.first > b.first;
	}
	return (a.second) < (b.second) ;
}
int lcm(int a , int b){
	return  (a * b) / (__gcd(a , b));
}
int n , m ; 
vector<vector<int>> g;
vector<bool> vis;
void dfs(int node){
  vis[node] = true;
  cout << node << " ";
  for(auto neigh : g[node]){
    if(!vis[neigh])dfs(neigh);
  }
}
void solve(){
  cin>>n>>m;
  g.assign(n , vector<int>());
  vis.assign(n , false);
  fr(i,m){
    int x,y;cin>>x>>y; 
    g[x].pb(y);
    g[y].pb(x);
  }
  dfs(0);
}
	
int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);
    int T = 1;
    //cin >> T;
    for(int i = 1 ; i <= T ; i++)
    {
        solve();
    }
    return 0;
}
