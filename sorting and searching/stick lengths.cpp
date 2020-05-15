#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	double avg=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll mid;
	if(n%2 == 0) mid = (n/2)-1;
	else mid = n/2;
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		ans+=abs(a[mid]-a[i]);
	}
	cout<<ans;
}
