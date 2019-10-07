/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
int CompareLists(Node headA, Node headB) {
    // This is a "method-only" submission. 
    // You only need to complete this method 
    Node p = headA;
    Node q = headB;
    int flag = 1;
    while(p!=null && q!=null) {
        if(p.data != q.data) {
            flag = 0;
            break;
        }
        p = p.next;
        q = q.next;
    }
    if(p==null && q!=null) {
        flag = 0;
    }
    else if(q==null && p!=null) {
        flag = 0;
    }
    return flag;
}
