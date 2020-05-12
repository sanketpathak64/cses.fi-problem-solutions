#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n,i=1;
	cin>>n;
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	if(n==4)
	{
		cout<<"2 4 1 3";
		return 0;
	}
	if(n<4)
		cout<<"NO SOLUTION";
	else
	{
		
		while(i<=n)
		{
			cout<<i<<" ";
			i+=2;
		}
		i=2;
		while(i<=n)
		{
			cout<<i<<" ";
			i+=2;
		}
	}
}
