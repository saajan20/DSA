#include<bits/stdc++.h>
using namespace std;
struct node{
    char data;
    int freq;
    node *left,*right;
    node(char data,int freq)
    {
        this->data=data;
        this->freq=freq;
        left=right=NULL;
    }
};
queue<node*> q1;
queue<node*> q2;
void printcode(struct node *t,string str){
    if(t==NULL)
    return;
    if(t->data!='$')
    cout<<t->data<<" "<<str<<endl;
    printcode(t->left,str+"0");
    printcode(t->right,str+"1");
}
struct node* getmin(){
 if(q1.empty())
 {
     struct node* m=q2.front();
     q2.pop();
     return m;
 }
 if(q2.empty())
 {
      struct node* m=q1.front();
      q1.pop();
      return m;
 }
  struct node* m=q2.front(); struct node* n=q1.front();
  if(m->freq<n->freq)
  {
      q2.pop();
      return m;
  }
   q1.pop();
      return n;
}
int main(){
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'}; 
	int freq[] = {5, 9, 12, 13, 16, 45}; 
	int size = sizeof(arr)/sizeof(arr[0]); 
	for(int i=0;i<size;i++)
	q1.push(new node(arr[i],freq[i]));
    node *left,*right,*top;
	while(!(q1.empty()&&q2.size()==1))
	{
	   left=getmin();
	   right=getmin();
	   top = new node('$' , left->freq + right->freq); 
	   top->left=left;
	   top->right=right;
	   q2.push(top);
	}
struct node *f=q2.front();
printcode(f,"");
	
}