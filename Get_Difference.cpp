#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_node(Node *&head, Node *&tail, int val){
    Node * new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }   
        Node * temp = head;
        tail->next = new_node;
        tail = new_node;
}
int get_difference(Node *head){
    int min= INT_MAX, max=INT_MIN;
    while(head != NULL){
        if(head->val<min){
            min=head->val;
        }
        if(head->val>max){
            max=head->val;
        }
        head= head->next;
    }
    return max-min;
}
int main() {
    int min= INT_MAX, max=INT_MIN, val;
    Node * head = NULL;
    Node * tail = NULL;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert_node(head, tail, val);

    }
    
     cout<<get_difference(head)<<endl;
    return 0;
}

