#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int cur=0;
		int i=1;
		if(n>1)
		while(i<n)
		{
			if(ar[i]-ar[i-1]>0)
			{
				cur+=ar[i]-ar[i-1];
			}
			i++;
		}
		 cout<<cur<<"\n";
	}										// Reading input from STDIN

}

