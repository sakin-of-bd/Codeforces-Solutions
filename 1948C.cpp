#include<bits/stdc++.h>
#define fi1(i,n) for(int i=0;i<n;i++)
#define fi2(i,n) for(int i=1;i<=n;i++)
#define fd1(i,n) for(int i=n-1;i>=0;i--)
#define fd2(i,n) for(int i=n;i>=1;i--)
#define endl '\n'
#define int long long
using namespace std;

const int N=2e5+5;
int dr[]={-1,+1,0,0};
int dc[]={0,0,+1,-1};

char grid[2][N];
int vis[2][N];
int row, col;

bool valid(int r, int c)
{
    return r>=0 && r<row && c>=0 && c<col && vis[r][c]!=1;
}

int dfs(int ur, int uc, int turn)
{
    vis[ur][uc]=1;
    int ans=1;
    if(turn==1)
    {
        if(grid[ur][uc]=='>')
        {
            ans+=dfs(ur,uc+1,turn^1);
        }
        else
        {
            ans+=dfs(ur,uc-1,turn^1);
        }
    }

    else
    {
        for(int i=0;i<4;i++)
        {
            int vr=ur+dr[i];
            int vc=uc+dc[i];
            if(valid(vr,vc))
            {
                ans+=dfs(vr,vc,turn^1);
            }
        }
      
    }
    return ans;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    row=2;
    cin>>col;
    for(int i=0;i<row;i++)
    {
        cin>>grid[i];
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<col;j++)
        {
            vis[i][j]=0;
        }
    }

    int val=dfs(0,0,0);

    if(vis[1][col-1])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
  }
    
}