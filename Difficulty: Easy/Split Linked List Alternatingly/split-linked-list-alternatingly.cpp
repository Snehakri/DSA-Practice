//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to split a linked list into two lists alternately
     vector<Node*> alternatingSplitList(struct Node* head) {
       vector<Node*> vec;
       if(head==NULL){
           return vec;
       }
       if(head->next==NULL){
           vec.push_back(head);
        
           return vec;
       }
       Node *temp=head->next->next;
       int i=0;
       
       Node* p=head;
       Node* q=head->next;
       vec.push_back(p);
       vec.push_back(q);
       while(temp!=NULL){
           if(i%2==0){
               Node* newnode=new Node(temp->data);
               p->next=newnode;
               p=p->next;
           }
           else{
                 Node* newnode=new Node(temp->data);
               q->next=newnode;
               q=q->next;
           }
           temp=temp->next;
           i++;
       }
       p->next=NULL;
       q->next=NULL;
       return vec;
    }
};


//{ Driver Code Starts.

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        vector<Node*> result = ob.alternatingSplitList(head);
        printList(result[0]);
        printList(result[1]);
    }

    return 0;
}

// } Driver Code Ends