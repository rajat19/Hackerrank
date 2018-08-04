/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int x)
{
    Node *p = head,*q = new Node();
    q->data = x;
    q->next = NULL;    
    if(head == NULL) {
        return q;
    }
    while(p->next != NULL) {
        p = p->next;
    }
    p->next = q;
    return head;
}

