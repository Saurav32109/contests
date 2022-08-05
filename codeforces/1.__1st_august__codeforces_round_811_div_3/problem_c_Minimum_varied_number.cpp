#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s;
		cin>>s;
		int ans=0;
		int i=0;
		for( i=9;i>=1;i--)
		{
			ans+=i;
			if(ans>=s) break;
		}
		ans-=i;
		cout<<s-ans;
		i++;
		while(ans>0)
		{
			ans-=i;
			cout<<i;
			i++;
		}
		cout<<"\n";
	}
return 0;
}
				
			
