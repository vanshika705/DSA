#include <iostream>
#include<vector>
#include<queue>

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

static int idx = -1;
Node* buildTree(vector<int> &preorder){  //O(n) 

    idx++;

    if(preorder[idx] == -1) return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); //left 
    root->right = buildTree(preorder); //right 

    return root;
}

//preorder traversal
void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout<< root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//inorder traversal
void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}

//postorder traversal
void postorder(Node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}

//level order traversal
void levelorder(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else break;
        
        }

        cout<< curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }

}

int main(){
    vector<int> preorder = {1 ,2 , -1 , -1  , 3, 4, -1, -1, 5, -1, -1 };

    Node* root = buildTree(preorder);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    preOrder(root);
    cout<< endl;

    inorder(root);
    cout<< endl;

    postorder(root);
    cout<< endl;

    levelorder(root);
    cout<<endl;


    return 0 ;
}