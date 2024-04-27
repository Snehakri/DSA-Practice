//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    // Node * midfind(Node * head){
    //     Node *fast=head,*slow=head;
    //     Node* pre;
    //     while(fast->next && fast->next->next){
    //         fast=fast->next->next;
    //         pre=slow;
    //         slow=slow->next;
    //     }
    //     pre->next=slow->next;
        
    //     return head;
    // }
    Node* deleteMid(Node* head)
    {
        
        Node *fast=head,*slow=head;
        Node* pre;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            pre=slow;
            slow=slow->next;
        }
        if(fast->next!=NULL) {
            pre=slow;
            slow=slow->next; 
        }
        pre->next=slow->next;
        
        return head;
        
        // Your Code Here
    }
};

//{ Driver Code Starts.



void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		Solution obj;
		head = obj.deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends