#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	ll lm=a[0],gm=a[0];
	for(int i=1;i<n;i++)
	{
		lm=max(a[i],lm+a[i]);
		if(gm<lm)
			gm=lm;
	}
	cout<<gm;
}
