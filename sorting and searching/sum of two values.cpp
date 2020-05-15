#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	map<ll,ll> b;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		b[k-a[i]]=i+1;
	}
	for(ll i=0;i<n;i++)
	{
		if(b[a[i]]!=0 && b[a[i]]!=i+1)
		{
			cout<<i+1<<" "<<b[a[i]];
			return 0;
		
		}
	}
	cout<<"IMPOSSIBLE";
}
