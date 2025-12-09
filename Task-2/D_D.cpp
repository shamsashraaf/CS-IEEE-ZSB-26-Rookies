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
   vi v(n+1) , u(n+1); 
   for (int i = 1; i <= n ; i++)
   {
      cin >> v[i] ; u[i] = v[i];
   }
   
   
   int q ; cin >> q ;

   vi preU(n+1,0);
   vi preV(n+1,0);

   for(int i = 1 ; i<=n ; i++) preV[i]=preV[i-1]+v[i];
   
   sort(all(u));
   for(int i =1 ; i<= n ; i++) preU[i]=preU[i-1]+u[i];
   
   while(q--){
      int t,l , r ; cin >> t >> l >> r ;

      if(t==1) cout<<preV[r] - preV[l-1]<<"\n";
      else cout << preU[r] - preU[l-1]<<"\n";

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

