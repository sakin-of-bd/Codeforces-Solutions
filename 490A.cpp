/*******************************************************************************************
*                                আমাকে আমার মতো থাকতে দাও,                             * 
**                           আমি নিজেকে নিজের মতো গুছিয়ে নিয়েছি।                         **
***                           যেটা ছিলনা ছিলনা সেটা না পাওয়াই থাক,                         ***
****                                  সব পেলে নষ্ট জীবন।                                 **** 
*********************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>o,t,th;
    for(int i=1;i<=n;i++){
      int x;
      cin>>x ;
      if(x==1)
        o.push_back(i);
      else if(x == 2)
        t.push_back(i);
      else if( x== 3)
        th.push_back(i);
    }
    int ans = min(o.size(),min(t.size(),th.size()));
    cout<<ans<< endl;
    for(int i=0;i<ans;i++){
      cout<<o[i]<<" "<<t[i]<<" "<<th[i]<<endl ;
    }
	return 0;
}
