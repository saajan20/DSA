void preorder(struct node *root)
{
    stack <node*> s;
    struct node *curr=root;
    while(curr!=NULL || !s.empty() )
    {
        while(curr)
        {
            cout<<curr->data;
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
    }
}
void preorder(struct node *root)
{
    while(root)
    {
        if(!root->left)
        {    
            cout<<root->data;
            root=root->right;
        }
        else
        {
            struct node *p=root->left;
            while(p->right && p->right != root)
              p=p->right;
            if(!p)
            {   cout<<root->data;
                p->right=root;
                root=root->left;
            }
            else
            {
               p->right=NULL;
               root=root->right;
            }
        
        }
    }
}