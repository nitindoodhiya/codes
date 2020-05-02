// https://practice.geeksforgeeks.org/problems/inversion-of-array/0
#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef vector<int long long > vi; 
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
bool comp(ll a,ll b)
{
	return a<b;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ar[n];
        set< pi >s;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            s.insert(make_pair(ar[i],i));
        }
        set< pi >::iterator it;
        for (int i = 0; i < n; i++)
        {
            s.erase(make_pair(ar[i],i));
            it = s.lower_bound(make_pair(ar[i],i));
            ans+= distance( s.begin(),it);        
        }
        cout<<ans<<endl;
    }
}

