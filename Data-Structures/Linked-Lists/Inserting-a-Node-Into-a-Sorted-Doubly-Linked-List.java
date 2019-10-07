/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
     Node prev;
  }
*/

Node SortedInsert(Node head,int data) {
    Node q = new Node();
    q.data  = data;
    q.next = null;
    q.prev = null;
    if(head == null)
        head = q;
    else {
        Node p = head;
        while(p.next!=null && p.next.data<=data) {
            p = p.next;
        }
        if(p.next!=null) q.next = p.next;
        p.next = q;
        q.prev = p;
    }
    return head;
}
