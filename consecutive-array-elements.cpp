// http://www.geeksforgeeks.org/check-if-array-elements-are-consecutive/
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
    while(t--)
    {
        int n;
        cin>>n;
        int m=INT_MAX;
        int a;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            ans = ans^a;
            m = min(a,m);
        }
        for(int i=0;i<n;i++)
        {
            ans = ans ^(m+i);
        }
        if(ans)
            cout<<"No";
        else
            cout<<"Yes";
        cout<<endl;
    }    
}

