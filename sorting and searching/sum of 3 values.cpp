#include <bits/stdc++.h> 
using namespace std; 
void nos(int A[],int b[], int arr_size, int sum) 
{ 
    int l, r; 
  
    sort(A, A + arr_size); 
  
    
    for (int i = 0; i < arr_size - 2; i++) { 
  
        l = i + 1;
        r = arr_size - 1;  
        while (l < r) 
		{ 
            if (A[i] + A[l] + A[r] == sum) 
			{ 
               
//               cout<<l<<" "<<i<<" "<<r<<endl;
               int z[3];
               for(int j=0;j<arr_size;j++)
               {
               		if(A[l]==b[j])
               		{
               			z[0]=j+1;
               			break;
					}	
			   }
			   for(int j=0;j<arr_size;j++)
               {
               		if(A[i]==b[j] && z[0]!=j+1)
               		{
               			z[1]=j+1;
               			break;
					}	
			   }
			   for(int j=0;j<arr_size;j++)
               {
               		if(A[r]==b[j] && z[0]!=j+1 && z[1]!=j+1)
               		{
               			z[2]=j+1;
               			break;
					}	
			   }
			   sort(z,z+3);
			   cout<<z[0]<<" "<<z[1]<<" "<<z[2];
			   return ; 
            } 
            else if (A[i] + A[l] + A[r] < sum) 
                l++; 
            else
                r--; 
        } 
    } 
	cout<<"IMPOSSIBLE";
} 
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n],b[n];
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		b[i]=a[i];
	}
	nos(a,b,n,k);
}
