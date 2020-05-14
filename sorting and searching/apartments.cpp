#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n],b[m];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	for(ll i=0;i<m;i++)
		cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	
	int i=0,j=0,c=0;
	
	while(i<n && j<m)
	{
		if(a[i]+k<b[j])
			i++;
		else if(a[i]-k>b[j])
			j++;
		else
		{
			i++;j++;c++;
		}
	}
	cout<<c;
}
