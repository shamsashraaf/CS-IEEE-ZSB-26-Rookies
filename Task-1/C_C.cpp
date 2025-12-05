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
  
  vi nums (n); 

  int sum = n*(n+1)/2;
  
  if(sum%2!=0) no;
  else {
  int target = sum/2;
   
   vi a,b;
   unordered_set<int> taken ;
  for(int i =n ; i>=1 ; i--){
   if(i<=target){
      a.push_back(i);  taken.insert(i);
      target-=i;
   }
  } 
  for(int i = n; i>=1 ; i--) if(!taken.count(i)) b.push_back(i);
   yes;
   cout<< a.size() <<"\n";
   cout<< a <<"\n";

   cout<< b.size() <<"\n";
   cout<< b <<"\n";
  }


}



signed main()

{   
    FastIO();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  //int t; cin >> t;
  //while (t--){

     solve();

  //}
   return 0;
}