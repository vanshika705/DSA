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

// calculate height to btree
int height(Node* root){
    if(root == NULL) return 0;

    int left_ht = height(root->left);
    int right_ht = height(root -> right);

    return max(left_ht, right_ht) + 1;
}

// count nodes of btree
int count(Node* root){
    if(root == NULL) return 0;

    int left_cnt = count(root->left);
    int right_cnt = count(root -> right);

    return left_cnt + right_cnt + 1;
}

// calculate sum of nodes of btree
int sumOfNodes(Node* root){
    if(root == NULL) return 0;

    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root -> right);

    return  leftSum + rightSum + root->data;
}

// top view of tree
void topView(Node* root){
    queue<pair<Node*,int>> q; //pair(node, horizontal distance)
    map<int , int > m; // <horizontal distance , node value>
    q.push({root, 0});

    while(q.size()>0){
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if(m.find(currHD) == m.end()){
            m[currHD] = curr -> data;
        }

        if(curr -> left != NULL){
            q.push({curr ->left, currHD-1});
        }

        if(curr -> right != NULL){
            q.push({curr -> right, currHD+1});
        }

    }

    for(auto it : m){
        cout<< it.second << " ";
    }

    cout << endl;
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

    cout<< "Height of tree : "<< height(root) <<endl;

    cout<< "Nodes of tree : "<< count(root) <<endl;

    cout<< "Sum of Nodes of tree : "<< sumOfNodes(root) <<endl;

    topView(root);

    return 0 ;
}