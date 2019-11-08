#include<bits/stdc++.h>
using namespace std;

struct Tree{
    int data;
    struct Tree *left;
    struct Tree *right;
    Tree(int val){
        this->data = val;
    }
};

int ans;

int unival(Tree *node, int par){
    if(node==NULL)return 1;
    int x = 1;
    x = min(x, unival(node->left, node->data));
    x = min(x, unival(node->right, node->data));
    if(x==1)ans++;
    if(node->data==par)return min(x,1);
    else return 0;
}

int main(){
    ans = 0;
    Tree *root = new Tree(0);
    root->left = new Tree(1);
    root->right = new Tree(0);
    root->right->right = new Tree(0);
    root->right->left = new Tree(1);
    root->right->left->left = new Tree(1);
    root->right->left->right = new Tree(1);
    unival(root, -1);
    cout<<ans<<endl;
    return 0;
}