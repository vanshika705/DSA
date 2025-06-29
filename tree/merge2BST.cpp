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


// build BST
Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val : arr){
        root = insert(root, val);

    }

    return root;
}

//inorder sequence of BST
void inorder(Node* root, vector<int> &arr){
    if(root == NULL){
        return;
    }

    inorder(root->left , arr);
    arr.push_back(root->data);
    inorder(root->right, arr);

}

// build BST from sorted order
Node* buildBSTFromSorted(vector<int> arr, int st , int end){
    if(st > end) return NULL;

    int mid = st+(end-st)/2;
    Node* root = new Node(arr[mid]);
    root->left = buildBSTFromSorted(arr, st, mid-1);
    root->right = buildBSTFromSorted(arr, mid+1, end);

    return root;
}

// merge 2 BST
Node* merge2BST(Node* root1, Node* root2){
    vector<int> arr1, arr2;

    inorder(root1, arr1);
    inorder(root2, arr2);

    vector<int> temp; //final BST sorted seq
    int i =0 , j = 0;

    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i++]);
        }else{
            temp.push_back(arr2[j++]);
        }
    }

    while(i < arr1.size()){
        temp.push_back(arr1[i++]);
    }

    while(j < arr2.size()){
        temp.push_back(arr2[j++]);
    }

    return buildBSTFromSorted(temp,0, temp.size()-1); // sorted arr, st and  end index
}



int main(){
    // merge 2 BST
    vector<int> arr1 = {8,2,1,10};
    vector<int> arr2 = {5,3,0};

    Node* root1 = buildBST(arr1);
    Node* root2 = buildBST(arr2);

    Node* root = merge2BST(root1, root2);
    vector<int> seq;
    inorder(root, seq);
    for(int v : seq){
        cout << v << " ";
    }
    cout << endl;

    return 0;

}