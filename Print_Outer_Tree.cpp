// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// void printLeft(Node *root)
// {
//     if (root == NULL)
//         return;

//     if (root->left)
//     {
//         printLeft(root->left);
//         cout << root->left->val << " ";
//     }
//     else if (root->right)
//     {
//         printLeft(root->right);
//         cout << root->right->val << " ";
//     }
// }

// void printRight(Node *root)
// {
//     if (root == NULL)
//         return;

//     if (root->right)
//     {
//         cout << root->right->val << " ";
//         printRight(root->right);
//     }
//     else if (root->left)
//     {
//         cout << root->left->val << " ";
//         printRight(root->left);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     Node *root = new Node(n);
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *node = q.front();
//         q.pop();
//         int l, r;
//         cin >> l >> r;
//         if (l != -1)
//         {
//             node->left = new Node(l);
//             q.push(node->left);
//         }
//         if (r != -1)
//         {
//             node->right = new Node(r);
//             q.push(node->right);
//         }
//     }

//     if (root->left == NULL)
//     {
//         cout << root->val << " ";
//         printRight(root);
//     }

//     else if (root->right == NULL)
//     {
//         printLeft(root);
//         cout << root->val << " ";
//     }

//     else if (root->left != NULL && root->right != NULL)
//     {
//         printLeft(root);
//         cout << root->val << " ";
//         printRight(root);
//     }
//     return 0;


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void printLeft(Node *root){
    if (root == NULL) return;

    if (root->left){
        printLeft(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right){
        printLeft(root->right);
        cout << root->right->val << " ";
    }
}

void printRight(Node *root){
    if (root == NULL) return;

    if (root->right){
        cout << root->right->val << " ";
        printRight(root->right);
    }
    else if (root->left){
        cout << root->left->val << " ";
        printRight(root->left);
    }
}

int main(){
    int n;
    cin >> n;
    Node *root = new Node(n);
    queue<Node *> q;
    q.push(root);
    while (!q.empty()){
        Node *node = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1){
            node->left = new Node(l);
            q.push(node->left);
        }
        if (r != -1){
            node->right = new Node(r);
            q.push(node->right);
        }
    }
    
    if (root->left != NULL && root->right != NULL){
        printLeft(root);
        cout << root->val << " ";
        printRight(root);
    } else if (root->right == NULL){
        printLeft(root);
        cout << root->val << " ";
    } else if (root->left == NULL) {
        cout << root->val << " ";
        printRight(root);
    }

    return 0;
}

