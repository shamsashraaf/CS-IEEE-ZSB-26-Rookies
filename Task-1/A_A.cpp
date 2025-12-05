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
   int x ,n ; cin >> x >> n ;

   vi waight(n); cin >> waight;

   int q ; cin >> q ;
   vi query (q); cin >> query;

   vi attach;
   int curw=x;

   for(auto sh:query){
      auto it = lower_bound(all(attach),sh);
     if(it ==attach.end() || *it!=sh){
        curw+=waight[sh-1];
        attach.insert(it,sh);
        
      }
      else{
        curw-=waight[sh-1];
        attach.erase(it);
      }

     cout<< curw <<"\n";
   }
   

}


signed main()

{   
   //FastIO();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  //int t; cin >> t;
  //while (t--){

     solve();

  //}
   return 0;
}