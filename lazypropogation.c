void updateRange(int node,int tree[],int a[],int l,int r,int start,int end,int val)
{
    if(start>end)
		return;
	 
	 if(lazy[node]!=0){
		 tree[node]+=lazy[node];
		 if(start!=end){
			 lazy[2*node]+=lazy[node];
			 lazy[2*node+1]+=lazy[node];
			 }
			 lazy[node]=0;
		 }
		 //nooverlap
		 if(l>end||r<start){
		 return;}
		 //total overlap
		 if(l<=start&&r>=end)
		 {
			 tree[node]+=val;
			 if(start!=end){
				lazy[2*node]+=val;
			 lazy[2*node+1]+=val; 
				 
				 
			 }
			 return;
		}
		//partial overlap
		int mid=(start+end)/2;
		updateRange();//Left child
		updateRange();//right child
tree[node]=Math.min(tree[2*node],tree[2*node+1]);
}
int query()
{
	if(start>end)
		return Integer.Max;
	if(lazy[node]!=0){
		 tree[node]+=lazy[node];
		 if(start!=end){
			 lazy[2*node]+=lazy[node];
			 lazy[2*node+1]+=lazy[node];
			 }
			 lazy[node]=0;
		 }
	
	if(l>end||r<start){
		 return Integer.Max;}
		 if(start>=l&&r>=end)
			 return tree[node];
		 int mid=(start+end)/2;
		 int p1=query();//left node
		 int p2=query();//right node
		 return Math.min(p1,p2);
	
	
}