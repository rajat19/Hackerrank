/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
int FindMergeNode(Node headA, Node headB) {
    Node p = headA;
    int ans = -1;
    while(p!=null) {
        Node q = headB;
        while(q!=null) {
            if(p.data == q.data) {
                return q.data;
            }
            q = q.next;
        }
        p = p.next;
    }
    return ans;
}
