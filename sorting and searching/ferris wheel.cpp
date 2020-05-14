#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n,x;
	cin>>n>>x;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	ll l=0,r=n-1,ans=0;
	while(l<=r)
	{
		if(a[l]+a[r]<=x)
		{
			ans++;
			l++;
			r--;
		}
		else
		{
			r--;
			ans++;
		}
	}
	cout<<ans;
}
