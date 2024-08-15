//{ Driver Code Starts
// Initial template for C++

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

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

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
    Node * reverse(Node * head){
        if(!head) return NULL;
        
        Node *fast=head;
        Node *slow=NULL;
        while(fast){
            Node* temp=fast->next;
            fast->next=slow;
            slow=fast;
            fast=temp;
        }
        return slow;
    }
    Node* addOne(Node* head) {
        head=reverse(head);
        Node * p=head;
        Node *s=p;
        int carry=1;
        while(p){
            if(p->next==NULL) s=p;
            int n=p->data+carry;
            int m=n%10;
            carry=n/10;
            p->data=m;
            p=p->next;
        }
        if(carry!=0){
            Node * newnode=new Node(carry);
            s->next=newnode;
            s=s->next;
        }
        head=reverse(head);
        return head;
        
        // Your Code here
        // return head of list after adding one
        
    }
};

//{ Driver Code Starts.

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

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends