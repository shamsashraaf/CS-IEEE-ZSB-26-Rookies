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
   int n , q ; cin >> n >> q ;
   vi v(n) ; cin >> v ;

   vi pre(n+1);
   partial_sum(all(v),pre.begin()+1);

   while (q--){

      
      int l , r , k ; cin >> l >> r >> k ;
      //cout<< temp <<"\n" ;

      int newSum = pre[n] - (pre[r]-pre[l-1]) + (k*(r-l+1));

      if(newSum%2 != 0) yes;
      else no;

   }

   
   


}



signed main()

{   
   //FastIO();
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t;
   while (t--){

     solve();

   }
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

