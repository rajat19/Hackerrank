/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    
int GetNode(Node head,int n) {
     // This is a "method-only" submission. 
     // You only need to complete this method. 
    int total = 0;
    Node p = head;
    Node q = head;
    while(p!=null) {
        total++;
        p = p.next;
    }
    int rem = total - n - 1;
    int i = 0;
    while(i<rem && q!=null) {
        q = q.next;
        //System.out.print(q.data);
        i++;
    }
    return q.data;
}

