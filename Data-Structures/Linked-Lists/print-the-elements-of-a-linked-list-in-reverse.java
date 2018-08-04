/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    // This is a "method-only" submission. 
    // You only need to complete this method. 

void ReversePrint(Node head) {
  // This is a "method-only" submission. 
  // You only need to complete this method. 
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
    printlist(head);
}
void printlist(Node p) {
    while(p!=null) {
        System.out.println(p.data);
        p = p.next;
    }
}

