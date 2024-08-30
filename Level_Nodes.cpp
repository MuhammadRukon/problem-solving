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
void collectNodes(Node *root, int level, vector<int> &levelNodes){
    if (root == NULL) return;
    if (level == 0)
    {
        levelNodes.push_back(root->val);
        return;
    }
    collectNodes(root->left, level - 1, levelNodes);
    collectNodes(root->right, level - 1, levelNodes);
}
int depth(Node *root){
    if (root == NULL) return 0;
    int l = depth(root->left);
    int r = depth(root->right);
    return max(l, r) + 1;
}
int main()
{
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

    int level;
    cin >> level;
    vector<int> levelNodes;
    int height = depth(root) - 1;
    if (level > height){
        cout << "Invalid" << endl;
    }
    else{
        collectNodes(root, level, levelNodes);
        for (int val : levelNodes){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}