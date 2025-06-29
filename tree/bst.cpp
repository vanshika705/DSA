#include <iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// insert nide in BST
Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left , val);
    }else{
        root->right = insert(root->right, val);
    }

    return root;
}

// building binary search tree

Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val : arr){
        root = insert(root, val);

    }

    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return ;
    }

    inorder(root -> left);
    cout << root->data << " ";
    inorder(root -> right);
}

// searching in bst

bool search(Node* root , int key){ //O(height)
    if(root == NULL) return false;

    if(root->data == key) return true;

    if(root->data > key){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

// delete node from bst
Node* getInorederSuccessor(Node* root){ // IS is left most node in right subtree
    while(root != NULL && root->left !=NULL){
        root= root->left;
    }
    return root;
}

Node* delNode(Node* root , int key){
    if(root == NULL) return NULL;

    if(key < root->data){
        root->left = delNode(root->left, key);
    }else if(key > root->data){
        root->right = delNode(root->right, key);
    }else{
        // key == root->data
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;

        }else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
            
        }else{ // 2 child
            Node* IS = getInorederSuccessor(root->right);
            root -> data = IS->data;
            root->right =delNode(root->right, IS->data);

        }
    }
    return root;
}


int main(){

    vector<int> arr = {3,2,1,5,6,4};

    Node* root = buildBST(arr);
    inorder(root);
    cout<< endl;

    cout<< search(root, 5) <<endl; //1
    cout<< search(root, 8) <<endl; //0

    cout << "before : ";
    inorder(root);
    cout<< endl;

    delNode(root , 6);

    cout << "after : ";
    inorder(root);
    cout<< endl;

    
    return 0;

}