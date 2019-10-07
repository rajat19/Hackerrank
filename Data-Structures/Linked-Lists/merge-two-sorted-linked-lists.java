/*
  Merge two linked lists 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/

Node MergeLists(Node headA, Node headB) {
     // This is a "method-only" submission. 
     // You only need to complete this method
    Node l1 = headA;
    Node l2 = headB;
    Node head = new Node();
    Node p = head;
    while(l1!=null||l2!=null){
        if(l1!=null&&l2!=null){
            if(l1.data < l2.data){
                p.next = l1;
                l1=l1.next;
            }else{
                p.next=l2;
                l2=l2.next;
            }
            p = p.next;
        }else if(l1==null){
            p.next = l2;
            break;
        }else if(l2==null){
            p.next = l1;
            break;
        }
    }
 
    return head.next;
}
