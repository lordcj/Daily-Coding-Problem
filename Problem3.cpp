#include<bits/stdc++.h>
using namespace std;

struct Tree{
    struct Tree *left;
    struct Tree *right;
    string val;
    Tree(string v){
        this->val = v;
        left = right = NULL;
    }
};

string s;
map<string, int> ma;
int ind;

void preorder(Tree *node){
    if(node==NULL)return;
    s+=(node->val);
    s+=",";
    preorder(node->left);
    preorder(node->right);
}

void inorder(Tree *node){
    if(node==NULL)return ;
    inorder(node->left);
    ma[node->val]=ind;
    ind+=1;
    inorder(node->right);
}

string serialize(Tree * node){
    ma.clear();
    s = "";
    Tree *temp = node;
    preorder(temp);
    temp = node;
    ind=0;
    inorder(temp);
    return s;
}

Tree *build(vector<string> &ve, int start, int end){
    //cout<<ind<<endl;
    if(start>end)return NULL;
    Tree *node = new Tree(ve[ind]);
    ind++;
    node->left = build(ve, start, ma[node->val]-1);
    node->right = build(ve, ma[node->val]+1, end);
    return node;
}

Tree * deserialize(string s){
    vector<string> ve;
    string te="";
    for(char ch : s){
        if(ch==','){
            ve.push_back(te);te="";
        }else te+=ch;
    }
    ind = 0;
    Tree *node = build(ve, 0, ve.size()-1);
    return node;
}

int main(){
    struct Tree *root = new Tree("1");
    root->left = new Tree("2");
    root->right = new Tree("3");
    root->left->left = new Tree("4");
    root->left->right = new Tree("5");
    serialize(root);
    cout<<s<<endl;
    serialize(deserialize(s));
    cout<<s<<endl;
    return 0;
}