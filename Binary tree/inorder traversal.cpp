vector<int> Solution::inorderTraversal(TreeNode* A) {
      stack <TreeNode*> s;
      TreeNode *curr;
      vector<int> v;
      curr=A;
      v.clear();
      while(curr!=NULL || s.empty()==false)
      {
          while(curr)
          {
             
              s.push(curr);
              curr=curr->left;
          }
          curr=s.top();
          v.push_back(curr->val);
          s.pop();
          curr=curr->right;
          
      }
      
      return v;
      
}
---------------------------------------------------------------------------

vector<int> Solution::inorderTraversal(TreeNode* A) {
 TreeNode *curr,*prev;
 curr=A;
 vector<int> v;
 v.clear();
 while(curr!=NULL)
 {
     if(curr->left==NULL)
     {
         v.push_back(curr->val);
         curr=curr->right;
     }
     else
     {
         prev=curr->left;
         while(prev->right!=NULL&&prev->right!=curr)
         {
             prev=prev->right;
         }
         if(prev->right==NULL)
         {
         prev->right=curr;
         curr=curr->left;
         }
         else
         {
             prev->right=NULL;
             v.push_back(curr->val);
             curr=curr->right;
         }
     }
 }
 return v;
      
}