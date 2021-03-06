#include<bits/stdc++.h>
using namespace std;
struct Tree
{
    int value;
    Tree*left, *right;
};
Tree*head=NULL;
void Insert(Tree*prev, Tree*cur, int val, int lr)
{
    if(cur==NULL)
    {
        cur=new Tree();
        cur->value=val;
        cur->left=cur->right=cur;
        if(head==NULL) head=cur;
        else if(lr==0)prev->left=cur;
        else if(lr==1)prev->right=cur;
    }
    else if(val<cur->value)Insert(cur,cur->left,val,0);
    else Insert(cur,cur->right,val,1);
}
void postorder(Tree*root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<< root->value << "\t";

}
int main()
{
  Insert(NULL,head,10,-1);
  Insert(NULL,head,15,-1);
  Insert(NULL,head,25,-1);
  Insert(NULL,head,28,-1);
  postorder(head);
  return 0;
}


