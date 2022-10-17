struct box{
    int h,w,l;
};
box bo[1001];
bool compare(box a,box b)
{
    return ((a.l*a.w)>(b.l*b.w));
}
int maxHeight(int height[],int width[],int length[],int n)
{
    //Your code here
    int index=0,j,i;
    for(i=0;i<n;i++)
    {
        bo[index].h=height[i];
        bo[index].l=max(width[i],length[i]);
        bo[index++].w=min(width[i],length[i]);
        
        bo[index].h=width[i];
        bo[index].l=max(height[i],length[i]);
        bo[index++].w=min(height[i],length[i]);
        
        bo[index].h=length[i];
        bo[index].l=max(width[i],height[i]);
        bo[index++].w=min(width[i],height[i]);
        
    }
    sort(bo,bo+3*n,compare);
    int he[3*n];
  for(i=0;i<3*n;i++)
  {
    he[i]=bo[i].h;
   // cout<<bo[i].l<<" "<<bo[i].w<<" "<<bo[i].h<<endl;
}
  for(i=1;i<(3*n);i++)
  {//cout<<i<<endl;
      for(j=0;j<i;j++)
      {      //  cout<<
         if(bo[j].l>bo[i].l&&bo[j].w>bo[i].w)
         {
             if(he[i]<he[j]+bo[i].h)
             he[i]=he[j]+bo[i].h;
         }
      }
     // cout<<he[i]<<endl;
  }
 return *max_element(he,he+3*n);
    
    
    
    
}