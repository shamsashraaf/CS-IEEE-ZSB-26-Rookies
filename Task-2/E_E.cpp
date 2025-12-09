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
   int n ; cin >> n ;
   vi v(n+2); for(int i = 1 ; i<= n ;i++) cin >> v[i];

   vi pre(n+2,0);
   for(int i = 1 ; i<=n ;i++) pre[i]=gcd(pre[i-1],v[i]);

   vi suf(n+2,0) ;
   for(int i = n ; i>=1 ; i--) suf[i]= gcd(suf[i+1],v[i]);
   
   int ans = 0 ;
   for(int i = 1 ;i<=n ; i++){
     int GCD = gcd(pre[i-1],suf[i+1]);
     ans = max(ans,GCD);
     
   }

   cout << ans <<"\n";
   
}



signed main()

{   
   //FastIO();
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   // freopen("bcount.in","r",stdin);
	// freopen("bcount.out","w",stdout);
   // int t; cin >> t;
   // while (t--){

     solve();

   // }
   return 0;
}











/*



.     ⢀⣤⡀⠀⋆
⠀⠀⠀⠀⠀⣼⣿⣿⣆⠀             ⋆         ⋆
⠀⠀⠀⠀⣸⣿⣿⣿⣿⣷⣶⣶⣶⣦⡄
⣠⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃           ⋆
⠻⢿⣿⣿⣿ Well, actually you are a Star.
⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣇
⠀⠀⠀⢸⣿⣿⣿⣿⢿⣿⣿⣿⣿     
⠀  ⠸⣿⣿⠟⠉⠀   ⠉⠛     ⋆
⋆



*/

