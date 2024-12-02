#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
int countNode(Node *head){
    struct Node * curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}
void insertNode(Node *&head, int data) {
    struct Node *newNode = new Node(); // Allocate memory for new node
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL) { // Case: Empty list
        head = newNode;
        return;
    }

    struct Node *curr = head;
    while (curr->next != NULL) { // Traverse to the end of the list
        curr = curr->next;
    }
    curr->next = newNode; // Link the new node at the end
}
void deleteAtLast(struct Node *head){
    if(head==NULL){
        return ;
    }
    struct Node *curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    curr->next=NULL;
}
void printLL(struct Node *head) {
    if (head == NULL) {
        return;
    }
    struct Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " -> ";
        curr = curr->next; // Move to the next node
    }
    cout << "NULL\n"; // Indicate end of the list
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    struct Node *head = NULL;
    for (int i = 1; i <= 5; i++) {
        insertNode(head, i); // Pass head by reference
    }
    printLL(head);
    //count the number of nodes in the linked list
    cout<<countNode(head)<<endl;
    deleteAtLast(head);
    printLL(head);
    cout<<countNode(head);
    return 0;
}
