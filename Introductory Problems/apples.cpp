#include <bits/stdc++.h> //runtime error
using namespace std; 
long long fmin(long long arr[], long long n) 
{ 
	long long sum = 0; 
	for (long long  i = 0; i < n; i++) 
		sum += arr[i]; 

	bool dp[n+1][sum+1]; 
	for (long long i = 0; i <= n; i++) 
		dp[i][0] = true; 

	for (long long i = 1; i <= sum; i++) 
		dp[0][i] = false; 

	// Fill the partition table in bottom up manner 
	for (long long i=1; i<=n; i++) 
	{ 
		for (long long j=1; j<=sum; j++) 
		{ 
			dp[i][j] = dp[i-1][j]; 

			if (arr[i-1] <= j) 
				dp[i][j] |= dp[i-1][j-arr[i-1]]; 
		} 
	} 

	long long diff = INT_MAX; 
	
	for (long long j=sum/2; j>=0; j--) 
	{ 
		if (dp[n][j] == true) 
		{ 
			diff = sum-2*j; 
			break; 
		} 
	} 
	return diff; 
} 

// Driver program to test above function 
int main() 
{ 
	long long n;
	cin>>n;
	long long a[n];
	for(long long i=0;i<n;i++)
		cin>>a[i];
	cout<< fmin(a, n); 
	return 0; 
} 

