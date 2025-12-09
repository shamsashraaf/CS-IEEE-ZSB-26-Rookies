//                           At last , i'll see the light ..\x03

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long
#define pii pair <int,int>
#define all(v) v.begin(), v.end()
#define no cout << "NO\n"
#define yes cout << "YES\n"
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
void FastIO() { cin.tie(nullptr)->sync_with_stdio(false); }
const int MOD=1000000007;



void shams (){

     
}

void solve(){
  int n ,q ; cin >> n >> q ;

  vi v(n+1) ; 
  for (int i = 1; i <= n; i++) cin>> v[i];  
  
  vi pre(n+1,0);
  for (int i = 1; i <= n; i++)  pre[i] = pre[i - 1] + v[i];
  
  while(q--){
    int l , r ; cin >> l >> r ;
  
  
    cout<< pre[r]-pre[l-1] <<"\n";
  }
  

}



signed main()

{   
   //FastIO();
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
  //  int t; cin >> t;
  //  while (t--){

     solve();

  //  }
   return 0;
}