#include<iostream>
#include<vector>

using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
    vector<TreeNode*> build(int s,int e)
    {
        vector<TreeNode*> all;
        if(s>e)
	{
            all.push_back(new TreeNode(-1));
            return all;
	}        
	for(int i=s;i<=e;i++)
        {
            vector<TreeNode*>left=build(s,i-1);
            vector<TreeNode*> right=build(i+1,e);
            for(int a=0;a<left.size();a++)
                for(int b=0;b<right.size();b++)
                {
                    TreeNode*head=new TreeNode(i);
                    head->left=left[a]->val>0?left[a]:NULL;
                    head->right=right[b]->val>0?right[b]:NULL;
                    all.push_back(head);
                }
	     cout<<i<<" "<<all.size()<<endl;
        }
        return all;
    }
