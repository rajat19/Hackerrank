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

Node Delete(Node head, int position) {
    // Complete this method
    if(head == null) {
        return null;
    }
    else {
        int i=0;
        Node p = head;
        Node q = new Node();
        if(position == 0) {
            head = p.next;
            return head;
        }
        while(i < position && p.next != null) {
            q = p;
            p = p.next;
            i++;
        }
        q.next = (p.next);
        return head;
    }
}


