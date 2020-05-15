#include<bits/stdc++.h>
using namespace std;
typedef long long ll; //2 wrong cases
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	map<ll,ll> ans;
	ll c=0,m=0;
	for(ll i=0;i<n;i++)
	{
		ans[a[i]]++;	
		if(ans[a[i]]==2)
		{
			ans.erase(ans.begin(),ans.end());
			ans[a[i]]++;
			c=1;
		}
		else
		{
//			ans[a[i]]++;
			c++;
		}
		if(c>m)
			m=c;
	}
	cout<<m;
}
