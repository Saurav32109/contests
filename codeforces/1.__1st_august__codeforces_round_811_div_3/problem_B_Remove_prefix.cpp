#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans=0;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		map<int,int> m;
		for(int i=n-1;i>=0;i--)
		{
			m[v[i]]+=1;
			
			if(m[v[i]]==2){
				ans=i+1;
				break;
				}
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}
		
