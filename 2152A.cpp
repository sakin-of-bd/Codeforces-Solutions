#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>0){
                st.insert(x);
            }
        }
        cout<<2*(st.size())-1<<endl;
    }
}