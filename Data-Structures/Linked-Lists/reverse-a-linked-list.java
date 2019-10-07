/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as  
  class Node {
     int data;
     Node next;
  }
*/
    // This is a "method-only" submission. 
    // You only need to complete this method. 
Node Reverse(Node head) {
    Node p = null;
    Node q = head;
    Node r = null;
    while(q!=null) {
        r = q.next;
        q.next = p;
        p = q;
        q = r;
    }
    head = p;
    return head;
}
