#include<iostream>

using namespace std;

struct Tree
{
	int val;
	Tree*parent;
	Tree*left;
	Tree*right;
};

void inorder(Tree*root)
{
	Tree*pre;
	Tree*curr=root;
	while(curr)
	{
		if(pre==curr->parent)
		{
			if(curr->left)
			{
				pre=curr;
				curr=curr->left;
			}
			else
				pre=NULL;
		}
		else if(pre==curr->left)
		{
			cout<<curr->val<<endl;
			if(curr->right)
			{
				pre=curr;
				curr=curr->right;
			}
			else
			{
				pre=curr;
				curr=curr->parent;
			}
		}
		else if(pre==curr->right)
		{
			pre=curr;
			curr=curr->parent;
		}
	}
}

main()
{
	Tree*root=new Tree();
	root->val=3;
	root->left=new Tree();
	root->left->val=1;
	root->left->parent=root;
	root->right=new Tree();
	root->right->val=5;
	root->right->parent=root;
	root->left->right=new Tree();
	root->left->right->val=0;
	root->left->right->parent=root->left;
	inorder(root);
}
