#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
 {
	//code
	int t,m,n,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>m>>n;
	     char s1[m],s2[n];
	     cin>>s1>>s2;
	      int table[m+1][n+1];
	      for(i=0;i<=m;i++)
	      {
	          for(j=0;j<=n;j++)
	          {
	              if(i==0)
	              table[i][j]=j;
	              else if(j==0)
	              table[i][j]=i;
	              else if(s1[i-1]==s2[j-1])
	              table[i][j]=table[i-1][j-1];
	              else
	              table[i][j]=1+min(table[i-1][j],min(table[i-1][j-1],table[i][j-1]));
	          }
	      }
	      cout<<table[m][n]<<endl;
	}
	return 0;
}