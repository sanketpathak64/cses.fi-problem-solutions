#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	string a;
	cin>>a;
	int gmax=1,lmax=1;
	for(int i=1;i<a.size();i++)
	{
		if(a[i]==a[i-1])
		{
			lmax++;
			if(gmax<lmax)
				gmax=lmax;
		}
		else
			lmax=1;
	}
	cout<<gmax;
}
