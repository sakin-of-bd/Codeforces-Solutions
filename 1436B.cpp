  #include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
  
 typedef vector<int> vi;
 typedef vector<ll> vl;
 typedef vector<vi> vvi;
 typedef set<int> si;
 typedef set<ll> sl;
 typedef queue<int> qi;
 typedef queue<ll> ql;
 typedef stack<int> sti;
 typedef deque<int> dqi;
 typedef priority_queue<int> pqi;
 typedef priority_queue<ll> pql;
 typedef deque<ll> dql;
 typedef vector<vl> vvl;
 typedef pair<int,int> pii;
 typedef pair<double, double> pdd;
 typedef pair<ll, ll> pll;
 typedef vector<pii> vii;
 typedef vector<pll> vll;
 typedef double dl;

void solve(){


  int n;cin>>n;
  int a[n][n];
  for (int i = 0; i <n; i++)
  {
    for (int j = 0; j <n; j++)
    {
      if((i+1)%n==j||i==j)a[i][j]=1;
      else a[i][j]=0;
    }
    
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)cout<<a[i][j]<<" ";
    cout<<endl;
  }
  
}
 
 

int32_t main() {

   int t;cin>>t;
   while(t--){
     solve();
   }
 
    return 0;
}