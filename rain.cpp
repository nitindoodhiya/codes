
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	int count=0;
	cin >> n>>m;
	char mat[n][m];
	bool vis[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
			vis[i][j]=false;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int cnt=0;
			bool f=true;
			if(vis[i][j]==false &&  mat[i][j]=='.')
			{
				queue < pair<int,int> >q;
				q.push(make_pair(i,j));
				
				while(q.empty()==false)
				{
					pair<int,int> p=q.front();
					q.pop();
					int x = p.first;
					int y = p.second;
					vis[x][y]=true;
					if(x-1<0 || x+1 >n || y-1<0 || y+1 >m)
					{
						f=false;
					}	
					cnt++;
					if(x-1>=0 && mat[x-1][y]=='.')
					{
						if(vis[x-1][y]==false)
						q.push(make_pair(x-1,y));
					}
					if(y-1>=0 && mat[x][y-1]=='.')
					{
						if(vis[x][y-1]==false)
						q.push(make_pair(x,y-1));
					}
					if(x+1<n && mat[x+1][y]=='.')
					{
						if(vis[x+1][y]==false)
						q.push(make_pair(x+1,y));
					}
					if(y+1<m && mat[x][y+1]=='.')
					{
						if(vis[x][y+1]==false)
						q.push(make_pair(x,y+1));
					}
				}
			}
			if(f)
			count = max(cnt,count);
		}
		cout<<count<<endl;
	}
}
