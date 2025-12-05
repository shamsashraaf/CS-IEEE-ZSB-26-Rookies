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
   int n ; cin >> n;
   vi v(n); cin >> v;

   vi ans (n); stack<int> st ;
   for (int i = 0; i < n; i++)
   {
      while(!st.empty() && v[st.top()] >= v[i])  st.pop();
         
      if(st.empty()) ans[i]=0;
      else ans[i] =st.top() + 1 ;

      st.push(i);
      
  
   }

   for(auto sh : ans) cout << sh <<" ";
   
  

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