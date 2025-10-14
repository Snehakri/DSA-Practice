/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int sum=0;
    int nodeSum(Node* root, int l, int r) {
       
        Node* p=root;
        if(p==NULL){
            return sum;
        }
        if(p->data>=l && p->data<=r){
            sum+=p->data;
        }
        nodeSum(p->right,l,r);
        nodeSum(p->left,l,r);
        return sum;
    }
};
