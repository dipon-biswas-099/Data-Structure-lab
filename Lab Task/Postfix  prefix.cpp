#include<bits/stdc++.h>
using namespace std;

class TreeNode{

public:
    int data;
    TreeNode* left;
    TreeNode *right;

    TreeNode(){
        data = 0;
        left  = NULL;
        right = NULL;
    }

    TreeNode(int d){
        data = d;
        left = NULL;
        right  = NULL;
    }
};

class BST{
public:
    TreeNode* root;
    BST(){
        root = NULL;
    }
    bool isEmpty(){
        if(root = NULL)
            return true;
        else
            return false;
    }

    void insertNode(TreeNode* new_Node){
        if(root == NULL){
            root = new_Node;
            cout<<"Value inserted as Root Node"<<endl;
        }
        else{
            TreeNode* temp = root;
            while(temp != NULL){
                if(new_Node -> data == temp->data){
                    cout<<"Value already exist"<<endl;
                }
                else if((new_Node -> data < temp -> data) && (temp -> left == NULL)){
                    temp->left = new_Node;
                    cout<<"Value inserted to the left"<<endl;
                    break;
                }
                else if(new_Node->data < temp->data){
                    temp = temp->left;
                }
                else if((new_Node->data > temp->data) && (temp->right == NULL)){
                    temp->right = new_Node;
                    cout<<"Value inserted to the right"<<endl;
                    break;
                }
                else{
                    temp = temp->right;
                }
            }
        }
    }

    void preOrder(TreeNode* r){
        if(r == NULL)
            return;
        cout<<r->data<<" ";
        preOrder(r->left);
        preOrder(r->right);
    }

    void inOrder(TreeNode* r){
        if(r == NULL)
            return;
        inOrder(r->left);
        cout<<r->data<<" ";
        inOrder(r->right);
    }

    void postOrder(TreeNode* r){
        if(r == NULL)
            return;
        postOrder(r->left);
        postOrder(r->right);
        cout<<r->data<<" ";
    }

    int searchingTree(int v) {
        int index = 0;
        if (root == NULL) {
            return 0;
        } else {
        TreeNode * temp = root;
        while (temp != NULL) {
            if (v == temp -> data) {
                index++;
                return index;
            } else if (v < temp -> data) {
                temp = temp -> left;
            } else {
                temp = temp -> right;
            }
        }
        return 0;
        }
    }


};


int main()
{
    BST o1;
    TreeNode* new_Node = new TreeNode();
    TreeNode* new_Node1 = new TreeNode();
    TreeNode* new_Node2 = new TreeNode();
    TreeNode* new_Node3 = new TreeNode();
    TreeNode* new_Node4 = new TreeNode();
    TreeNode* new_Node5 = new TreeNode();
    TreeNode* searchedNode = new TreeNode();
    new_Node->data = 30;
    new_Node1->data = 40;
    new_Node2->data = 50;
    new_Node3->data = 20;
    new_Node4->data = 10;
    new_Node5->data = 60;

    o1.insertNode(new_Node);
    o1.insertNode(new_Node1);
    o1.insertNode(new_Node2);
    o1.insertNode(new_Node3);
    o1.insertNode(new_Node4);
    o1.insertNode(new_Node5);

    cout<<"PRE_ORDER: ";
    o1.preOrder(new_Node);
    cout<<endl;
    cout<<"POST_ORDER: ";
    o1.postOrder(new_Node);
    cout<<endl;
    cout<<"IN_ORDER: ";
    o1.inOrder(new_Node);
    cout<<endl;

    int index = o1.searchingTree(100);
    if(index == 0){
        cout<<"Data is not in the Tree."<<endl;
    }
    else{
        cout<<"Required Data found in the Tree..."<<endl;
        }
return 0;
}

