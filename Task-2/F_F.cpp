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
   int n , k , q ; cin >> n >> k >> q ;

   int size = 2e5 + 5;
   vi temp(size), pre(size);
    
   for (int i = 0; i < n; i++){
      int l, r; cin >> l >> r;
      temp[l]++;temp[r+1]--;
   }
 
   partial_sum(all(temp), temp.begin());
   for (int i = 0; i < size; i++) if(temp[i] >= k) pre[i] = 1;
      
    
   partial_sum(all(pre), pre.begin());
 
   for (int i = 0; i < q; i++){
     int a, b; cin >> a >> b;
      cout << pre[b] - pre[a-1]<< "\n";
   }

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

