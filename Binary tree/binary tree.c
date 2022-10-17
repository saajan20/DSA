#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
};
struct Node* newNode(int data)
{
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main()
{
    struct Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
}