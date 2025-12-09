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

  vi v(n); cin >> v ;

  vi pre1 (n+1) , pre2 (n+1) , pre3(n+1); 

  for(int i = 0 ; i<n ; i++){
    pre1[i+1] = pre1[i]+(v[i]==1);
    pre2[i+1] = pre2[i]+(v[i]==2);
    pre3[i+1] = pre3[i]+(v[i]==3);
  }

  while(q--){
    int a , b ; cin >> a >> b ;

    int fir = pre1[b]-pre1[a-1];
    int sec = pre2[b]-pre2[a-1];
    int thir = pre3[b]-pre3[a-1];

    cout << fir << " " << sec << " " << thir <<"\n";
 
  }
   
}



signed main()

{   
   //FastIO();
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   freopen("bcount.in","r",stdin);
	 freopen("bcount.out","w",stdout);
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

