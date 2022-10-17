#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
 {
	//code
long	int t;
	cin>>t;
	while(t--)
	{
	  long  int m,n,x,i,j,k;
	    cin>>m>>n>>x;
	long int table[n+1][x+1];
	    memset(table,0,sizeof(table));
	    for(i=1;i<=min(x,m);i++)
	    table[1][i]=1;
	    for(i=2;i<=n;i++)
	    {
	        for(j=i;j<=x;j++)
	        {
	            for(k=1;k<=m&&k<j;k++)
	            {
	                table[i][j]+=table[i-1][j-k];
	            }
	        }
	    }
	    cout<<table[n][x]<<endl;
	}
	return 0;
}


-------------------------------------------------------------------------------




#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
 {
	//code
long	int t;
	cin>>t;
	while(t--)
	{
	  long  int m,n,x,i,j,k;
	    cin>>m>>n>>x;
	long int table[n+1][x+1];
	    memset(table,0,sizeof(table));
	    for(i=1;i<=min(x,m);i++)
	    table[1][i]=1;
	    for(i=2;i<=n;i++)
	    {
	        for(j=i;j<=x;j++)
	        {
	          table[i][j]=table[i][j-1]+table[i-1][j-1];
	          if(j-m-1>=0)
	          {
	              table[i][j]-=table[i-1][j-m-1];
	          }
	        }
	    }
	    cout<<table[n][x]<<endl;
	}
	return 0;
}