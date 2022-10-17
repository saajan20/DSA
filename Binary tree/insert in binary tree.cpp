#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left,*right;
};
struct node *newNode(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(struct node *temp)
{
    if(!temp)
    return;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
int main()
{
   struct node *root=newNode(10);
   root->left=newNode(11);
   root->right=newNode(9);
   root->left->left=newNode(7);
   root->right->left=newNode(15);
   root->right->right=newNode(8);
   
   inorder(root);
   
   queue <struct node*> q ;
   q.push(root);
   while(!q.empty())
   {
       struct node *temp=q.front();
       q.pop();
       if(!(temp->left))
       {
           temp->left=newNode(12);
           break;
       }
       else
       q.push(temp->left);
       if(!(temp->right))
       {
           temp->right=newNode(12);
           break;
       }
       else
       q.push(temp->right);
   }
      inorder(root);
   
}