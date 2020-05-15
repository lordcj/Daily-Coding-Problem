 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x){
         left = NULL;
         right = NULL;
         val = x;
     }
 };
 
 map<lo,lo> ma;
 int ans,count;
 
 int traverse(TreeNode *node){
    if(node == NULL)return 0;
    int l = traverse(node->left);
    int r = traverse(node->right);
    int ret = node->val+l+r;
    if(ma.find(ret)!=ma.end())ma[ret]++;
    else ma[ret]=1;
    if(ma[ret] > count){
        count = ma[ret];
        ans = ret;
    }
    return ret;
 }
 
 void run(TreeNode *root){
     ans = -1;count = 0;
     traverse(root);
     cout<<ans<<endl;
 }
