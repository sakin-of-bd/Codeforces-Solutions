/*******************************************************************************************
*                                আমাকে আমার মতো থাকতে দাও,                             * 
**                           আমি নিজেকে নিজের মতো গুছিয়ে নিয়েছি।                         **
***                           যেটা ছিলনা ছিলনা সেটা না পাওয়াই থাক,                         ***
****                                  সব পেলে নষ্ট জীবন।                                 **** 
*********************************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{  
    int t;
    cin>>t;
    vector<string>v(t);  
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    }
    int first=0,second=0;
    string x;
    for(int i=0;i<t;i++)
    {
        if(v[0]==v[i])
        {
            first++;
        }
        else
        {
            x=v[i];
            second++;
        }
    }
    if(first>second)
    {
        cout<<v[0]<<endl;
    }
    else
    {
        cout<<x<<endl;
    }

}
