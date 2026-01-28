//                           At last , i'll see the light ..\x03
//           "There are so many worlds and I have not conquered even one ..yet" 

// Problem: E. Split
// Contest: Codeforces - Codeforces Round 1050 (Div. 4)
// URL: https://codeforces.com/contest/2148/problem/E

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
const int MOD=1000000007; const int INF=1e18;
int dx[] = {0, 1, 0, -1}; int dy[] = {1, 0, -1, 0};




void avadaKedavra (){

     
}

void solve(){
   //optimized version ta2reban
   int n , k ;cin>> n >> k;
   vi v(n);cin>> v;

   vi freq(n+1); for(auto sh:v) freq[sh]++;
   for(auto sh:v){
      if(freq[sh]%k!=0) {
         cout <<0<<"\n";
         return;
      }
   }

   vi freq2(n+1);
   int ans=0 ,l=0,r=0;
   while(r<n){
      freq2[v[r]]++;
      while(freq2[v[r]]>freq[v[r]]/k){
         freq2[v[l++]]--;
      }
      ans+=r-l+1;
      r++;

   }
   cout << ans << "\n";
}



signed main()

{   
   FastIO();
  
   // freopen("bcount.in","r",stdin);
	// freopen("bcount.out","w",stdout);
   int t; cin >> t;
   while (t--){

     solve();

   }
   return 0;
}











/*


.     ⢀⣤⡀⠀⋆
⠀⠀⠀⠀⠀⣼⣿⣿⣆⠀             ⋆         ⋆
 ⠀⋆⠀⣸⣿⣿⣿⣿⣷⣶⣶⣶⣦⡄ ⋆
⣠⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃           ⋆
⠻⢿⣿⣿⣿ Well, actually you are a Star.
⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣇      ⋆
⋆⠀⠀⢸⣿⣿⣿⣿⢿⣿⣿⣿⣿                ⋆
⠀  ⠸⣿⣿⠟⠉⠀   ⠉⠛     ⋆   ⋆
⋆



*/
