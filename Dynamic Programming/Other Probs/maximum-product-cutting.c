int maxans(int ans)
{
 int val[n+1];
 val[0]=val[1]=0;
 for(i=2;i<=n;i++)
{   int ans=0;
     for(j=1;j<=i/2;j++)
{
    int ans=max(ans,max(j*(i-j),j*val[i-j]));
  
}
val[i]=ans;

}

}