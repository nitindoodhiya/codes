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
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n-1;i+=1)
        {
            if (i%2==0)
            {
                if(ar[i]>ar[i+1])
                    swap(ar[i],ar[i+1]);
                
            }
            else
            {
                if(ar[i]<ar[i+1])
                    swap(ar[i],ar[i+1]);
                
            }
            
            // swap(ar[i],ar[m]);
        }
        for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
        cout<<endl;   
    }
       
}

