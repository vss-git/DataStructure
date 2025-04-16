#include<iostream>

using namespace std;

struct Node
{
   int key;
   Node* left;
   Node* right;
};

// Create new node with key=data
Node* createNode(int data)
{
    Node* newNode = (Node*) malloc (sizeof(Node));
    newNode->key = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Inorder Traversal
void inOrderTraversal(Node* root)
{
    if(root != nullptr){

    inOrderTraversal(root->left);

    cout << root->key << " --> ";

    inOrderTraversal(root->right);
    }
}

// Inorder Traversal
void preOrderTraversal(Node* root)
{
    if(root != nullptr){

    cout << root->key << " --> ";

    preOrderTraversal(root->left);

    preOrderTraversal(root->right);
    }
}

// Inorder Traversal
void postOrderTraversal(Node* root)
{
    if(root != nullptr){

    postOrderTraversal(root->left);

    postOrderTraversal(root->right);

    cout << root->key << " --> ";
    }
}

Node* insertNode(Node* root, int data)
{
    if(root == nullptr)
    return createNode(data);

    if(data < root->key)
    {
        root->left = insertNode(root->left,data);
    }
    else
    {
       root->right = insertNode(root->right,data); 
    }

    return root;
}


int main()
{
  struct Node *root = NULL;
  root = insertNode(root, 8);
  root = insertNode(root, 3);
  root = insertNode(root, 1);
  root = insertNode(root, 6);
  root = insertNode(root, 7);
  root = insertNode(root, 10);
  root = insertNode(root, 14);
  root = insertNode(root, 4);

  cout << "Inorder traversal: "<< endl;
  inOrderTraversal(root);  
  cout << "\n Pre-order traversal: "<< endl;
  preOrderTraversal(root);

  cout << "\n Post-order traversal: "<< endl;
  postOrderTraversal(root);  
    return 0;
}