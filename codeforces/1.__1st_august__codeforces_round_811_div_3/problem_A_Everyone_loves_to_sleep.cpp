#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,h,m;
		cin>>n>>h>>m;
		int th,tm,ans=INT_MAX;
		while(n--)
		{
			cin>>th>>tm;
			int md,mh;
			if(m>tm){
				md=60-m;
				md+=tm;
				th-=1;
			}
			else
				md=tm-m;
			if(h>th)
				mh=((24-h)+th)*60;
			else
				mh=(th-h)*60;
			md+=mh;
			ans=(ans>md?md:ans);
			
		}
		cout<<ans/60<<" "<<ans%60<<"\n";
	}
return 0;
}
		
					
			
			
