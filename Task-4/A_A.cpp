//                           At last , i'll see the light ..\x03
//           "There are so many worlds and I have not conquered even one ..yet" 


// Problem: A - A
// Contest: Virtual Judge - Two Pointers
// URL: https://vjudge.net/contest/766295#problem/A
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
   int n ,t; cin>>n>>t;
   vi v(n); cin>>v;
   int l=0, sum=0 ,cnt=0;
   for(int i =0 ; i<n ; i++){
      sum+=v[i];
      while(sum>t){
         sum-=v[l]; l++;
      }
      cnt=max(cnt,i-l+1);
   } 
   cout << cnt <<"\n";
   
}



signed main()

{   
   FastIO();
  
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
 ⠀⋆⠀⣸⣿⣿⣿⣿⣷⣶⣶⣶⣦⡄ ⋆
⣠⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃           ⋆
⠻⢿⣿⣿⣿ Well, actually you are a Star.
⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣇      ⋆
⋆⠀⠀⢸⣿⣿⣿⣿⢿⣿⣿⣿⣿                ⋆
⠀  ⠸⣿⣿⠟⠉⠀   ⠉⠛     ⋆   ⋆
⋆



*/
