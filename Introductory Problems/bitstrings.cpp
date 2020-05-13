#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
//	cout<<(ll)pow(2,n)%1000000007;
	ll a=1;
	while(n--)
	{
		a*=2;
		a%=1000000007;
	}
	cout<<a;
}
