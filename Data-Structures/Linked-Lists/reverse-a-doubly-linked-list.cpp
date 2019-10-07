/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head) {
    if(head==NULL)
        return head;
    else{
        Node *temp_ = head->next;
        Node *temp = head;
        Node *_temp = head->prev;
        while(temp->next!=NULL)
        {
            temp->prev = temp_;
            temp->next = _temp;
            temp = temp->prev;
            temp_ = temp->next;
            _temp = temp->prev;
        }
        temp->next = temp->prev;
        return temp;
    }
}
