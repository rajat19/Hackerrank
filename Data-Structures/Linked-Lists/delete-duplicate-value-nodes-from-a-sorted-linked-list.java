/*
Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/

Node RemoveDuplicates(Node head) {
    Node p = head;
    while(p!=null) {
        Node q = p.next;
        while(q!=null && q.data==p.data) {
            p.next = q.next;
            q = q.next;
        }
        p = p.next;
    }
    return head;
}
