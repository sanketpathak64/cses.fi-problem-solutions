#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll ans=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			ans+=(a[i-1]-a[i]);
			a[i]=a[i-1];
		}
	}
	cout<<ans;
}
