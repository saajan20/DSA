#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],lis[n];

	    for(i=0;i<n;i++)
{ 			lis[i]=1;
		cin>>a[i];
}
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[j]<a[i])
				{
					lis[i]=max(lis[i],lis[j]+1);
				}
				
			}
		

		}

cout<<*max_element(lis,lis+n)<<endl;

	}



}