class Solution {
public:
    
    vector<int>v;
void makeTree(TreeNode * root , int l , int r )
{
   int mid = (l+r)/2;

    root->val = v[mid];
 
   if(l==r)
    return;

   if( l==mid){

       root ->right = new TreeNode();
       makeTree(root -> right ,mid+1 ,r );
     }
    else{
      root->left = new TreeNode();
      root ->right = new TreeNode();
     makeTree(root -> right ,mid+1 ,r );
     makeTree( root -> left , l , mid-1);
    }
 return;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         v.assign(nums.size(),0);
        for(int i=0 ; i< nums.size() ;i++)
        {
            v[i]=nums[i];
        }
        TreeNode * root = new TreeNode();
        
         makeTree(root ,0, nums.size()-1);   
        
        return root;
    }
};