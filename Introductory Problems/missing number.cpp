#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n-1],sum=0;
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<(n*(n+1)/2)-sum;
}
