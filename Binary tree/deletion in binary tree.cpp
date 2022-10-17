#include<bits/stdc++.h>
struct node{
    int key;
    node *left,*right;
};
struct node *newnode(int data)
{
    struct node *temp=new node;
    temp->key=data;
    temp->left=temp->right=NULL;
}
void deleten(struct Node* want,struct Node *root)
{
    struct Node *temp;
     queue<Node*> q;
   // struct node* temp,*want;
    q.push(root);
    while(!q.empty())
    {       temp=q.front();
            q.pop();
            if(temp==want)
            {
                temp=NULL;
                delete(temp);
                return;
            }
            if(temp->left)
            {
                if(temp->left==want)
                {
                temp->left=NULL;
                return;
                }
            
            else
            q.push(temp->left);
            }
            
            if(temp->right)
            {
                if(temp->right==want)
                {
                temp->right=NULL;
                return;
                }
                else
                q.push(temp->right);
            }
            
    }   
    }
    
    
void deletionBT(struct Node* root, int key)
{
    // code here
    queue<Node*> q;
    if(!root)
    return;
    struct Node* temp,*want;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp->key==key)
        want=temp;
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    want->key=temp->key;
    deleten(temp,root);
    
 
}
void inorder(struct Node* temp) 
{ 
    if (!temp) 
        return; 
    inorder(temp->left); 
    cout << temp->key << " "; 
    inorder(temp->right); 
} 
int main()
{
    map <int,node*> m;
    cin>>n;
    while(n--)
    {
        int a,b;
        char relation;
        struct node *parent,*root=NULL,*child;
        cin>>a>>b>>relation;
        if(m.find(a)==m.end())
        {
            parent=newnode(a);
            m[a]=parent;
            if(root==NULL)
            root=parent;
        }
        else
        parent=m[a];
        child=newnode(b);
        if(relation=='L')
        {
        parent->left=child;
        }
        else
        parent->right=child;
        m[b]=child;
    }
    
    int key;
    cin>>key;
    deletionBT(root,key);
    inorder(root); 
}