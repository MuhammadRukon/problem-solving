#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int leafNodeCount(Node *root)
{
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    else{
        int l = leafNodeCount(root->right);
        int r = leafNodeCount(root->left);
        return l + r;
    }
}

int depth(Node *root){
    if (root == NULL) return 0;
    int l = depth(root->left);
    int r = depth(root->right);
    return max(l, r) + 1;
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
    pow(2, depth(root) - 1) == leafNodeCount(root) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}