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
void collectLeaf(Node *root, vector <int> &leaves)
{
    if (root == NULL) return;
    if (root->right != NULL) collectLeaf(root->right, leaves);
    if (root->left != NULL) collectLeaf(root->left, leaves);
    if (root->left == NULL && root->right == NULL){
        leaves.push_back(root->val);
        return;
    }
}
int main()
{
    int n;
    cin >> n;
    Node *root = new Node(n);
    queue <Node*> q;
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
    vector <int> leafNodes;

    collectLeaf(root, leafNodes);

    sort(leafNodes.begin(), leafNodes.end(), greater <int> ());

    for (int leaf : leafNodes){
        cout << leaf << " ";
    }
    return 0;
}