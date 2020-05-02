
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;										// Reading input from STDIN
	while(t--)
	{
		string s="";
		cin>>s;
		
		vector<int>mp[256];
		for(int i=0;i<s.length();i++)
		{
			mp[(int)s[i]].push_back(i);
		}
		int ans=INT_MAX;
		for(int i=1;i<s.length()-1;i++)
		{
			char l = s[i-1];
			char r = s[i+1];
			if(l==r)
			{	
				ans=0;
				break;
			}
			int got=-1;
			for(int j=0;j<mp[l].size();j++)
			{
				if(mp[l][j]>i )
				{
					got = mp[l][j];
					break;
				}
			}
			if(got!=-1)
			{
				got = got-i;
				ans = min(got,ans);
				if(got<0)
				{
					cout<<"-1";
				}
			}
			
			got=-1;
			for(int j=0;j<mp[r].size();j++)
			{
				if(mp[r][j]<i )
				{
					got = mp[l][j];
					break;
				}
			}
			if(got!=-1)
			{
				got = i-got;
				ans = min(got,ans);
				if(got<0)
				{
					cout<<"-1";
				}
			}
		}
		if(ans==INT_MAX)
			cout<<-1<<endl;
		cout<<ans<<endl;
	}	
}

