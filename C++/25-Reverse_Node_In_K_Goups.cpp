// CPP program to reverse a linked list
// in groups of given size
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
    int data;
    Node* next;
};

/* Reverses the linked list in groups
of size k and returns the pointer
to the new head node. */
Node* solve(Node* head, int k, int len){
    /*  Base Condition */
    if(k > len || head == NULL){
        return head;
    }

    /*       reverse K nodes            */
    Node* prev = NULL;
    Node* curr = head;
    Node* nxt;
    int c=0;
    while(curr && c<k){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        c++;
    }

    head->next = solve(curr, k, len-k);
    return prev;
}

Node* reverseKGroup(Node* head, int k) {
    Node* temp = head;
    int len=0;
    while(temp){
        len++;
        temp = temp->next;
    }
    return solve(head, k, len);
}

void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Function to print linked list */
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    /* Created Linked list
       is 1->2->3->4->5->6->7->8->9 */
    push(&head, 9);
    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "Given linked list \n";
    printList(head);
    cout << "\nReversed in size of: ";
    int n;
    cin>>n;
    head = reverseKGroup(head, n);

    cout << "\nReversed Linked list \n";
    printList(head);

    return 0;
}
