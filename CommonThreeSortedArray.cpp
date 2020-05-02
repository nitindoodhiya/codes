// https://practice.geeksforgeeks.org/problems/common-elements/0
#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef vector<int long long > vi; 
typedef pair<int,int> pi;
#define F first 
#define S second 
#define pb push_back 
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
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int a1[n1];
        int a2[n2];
        int a3[n3];
        vi ans;
        for(int i=0;i<n1;i++)
            cin>>a1[i];
        for(int i=0;i<n2;i++)
            cin>>a2[i];
        for(int i=0;i<n3;i++)
            cin>>a3[i];

        int i1=0,i2=0,i3=0;
        int cnt=0;
        while(i1<n1 && i2<n2 && i3<n3)
        {
            int m = max(a1[i1],max(a2[i2],a3[i3]));
            
            while(i1<n1 && a1[i1]<m)
            {
                i1++;

            }
            while(i2<n2 && a2[i2]<m)
            {
                i2++;
            }
            while(i3<n3 && a3[i3]<m)
            {
                i3++;
            }
            while(i1<n1 && i2 <n2 && i3<n3 && a1[i1]==a2[i2] && a2[i2]==a3[i3])
            {
                if(ans.size() == 0 || ans[ans.size()-1]!=a1[i1])
                {
                    ans.pb(a1[i1]);
                }
                i1++;
                i2++;
                i3++;
            }
            // cout<<i1;
        }
        if(ans.size())
            for(auto x:ans)
            {
                cout<<x <<" ";
            }
        else
        {
            cout<<-1;
        }
        
        cout<<endl;

    }
    
}

