//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        Node *n=new Node();
        n->data=x;
        n->next=NULL;
        n->prev=NULL;
        
        Node *p=head,*s=NULL;
        bool done=false;
        
        if(p->data > x){
            n->next=p;
            p->prev=n;
            head=n;
            done=true;
        }
        while(p && done==false){
            if(p->data>x){
                s->next=n;
                n->prev=s;
                n->next=p;
                p->prev=n;
                done=true;
                break;
            }
            s=p;
            p=p->next;
        }
        if(done==false){
            s->next=n;
            n->prev=s;
        }
        return head;
        // Code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = getNode(x);
            tail = head;
        }

        while (ss >> x) {
            tail->next = getNode(x);
            tail->next->prev = tail;
            tail = tail->next;
        }

        int valueToInsert;
        cin >> valueToInsert;
        cin.ignore(); // Ignore the newline character after the value

        Solution obj;
        head = obj.sortedInsert(head, valueToInsert);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends