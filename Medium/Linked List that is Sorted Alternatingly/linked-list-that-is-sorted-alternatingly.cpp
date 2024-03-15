//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){ 
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    void splitlist(Node *head,Node ** ahead,Node ** dhead){
        *ahead = new Node(0);
        *dhead =new Node(0);
        
        Node *anext = *ahead;
        Node *bnext = *dhead;
        Node * curr=head;
        while(curr){
            anext->next=curr;
            anext=anext->next;
            curr=curr->next;
            
            if(curr){
                bnext->next=curr;
                bnext=bnext->next;
                curr=curr->next;
            }
        }
        anext->next=NULL;
        bnext->next=NULL;
        
        *ahead=(*ahead)->next;
        *dhead=(*dhead)->next;
        return;
    }
    void reverse(Node **dhead){
        Node *pre=NULL;
        Node *curr=*dhead;
        Node *next;
        while(curr){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        *dhead=pre;
        
    }
    Node* merge(Node *head1,Node *head2){
        if(!head1) return head2;
        if(!head2) return head1;
        
        Node *temp=NULL;
        if(head1->data <head2->data){
            temp=head1;
            head1->next= merge(head1->next,head2);
        }
        else{
            temp=head2;
            head2->next= merge(head1,head2->next);
        }
        return temp;
        // while(temp->next!=NULL){
        //     temp=temp->next;
        // }
        // temp->next =head2;
        // return head1;
        
    }
    // your task is to complete this function
    void sort(Node **head)
    {
        Node *ahead,*dhead;
        splitlist(*head,&ahead,&dhead);
        reverse(&dhead);
        *head =merge(ahead,dhead);
        return ;
         // Code here
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends