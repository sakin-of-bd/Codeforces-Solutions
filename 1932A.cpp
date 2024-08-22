/*******************************************************************************************
*                                আমাকে আমার মতো থাকতে দাও,                             * 
**                           আমি নিজেকে নিজের মতো গুছিয়ে নিয়েছি।                         **
***                           যেটা ছিলনা ছিলনা সেটা না পাওয়াই থাক,                         ***
****                                  সব পেলে নষ্ট জীবন।                                 **** 
*********************************************************************************************/
#include <bits/stdc++.h> 
using namespace std; 
using ll = long long int; 
void solve() 
{ 
int n; 
cin>>n; 
string s; 
cin>>s; 
int coins=0; 
int i=0; 
while(n--) 
{ 
  if(s[i]=='.') 
  { 
    i++; 
  } 
  else if(s[i]=='@') 
  { 
    coins++; 
    i++; 
  } 
  else{ 
    if(s[i+1]=='*') 
    { 
      break; 
    } 
    else{ 
      i++; 
    } 
  } 
} 
cout<<coins<<endl; 
} 
 
int main() 
{ 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL); 
  int t = 1; 
  cin >> t; 
  while (t--) 
  { 
    solve(); 
  } 
  return 0; 
}