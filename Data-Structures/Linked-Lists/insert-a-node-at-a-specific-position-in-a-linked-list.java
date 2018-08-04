/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    

Node InsertNth(Node head, int data, int position) {
    // This is a "method-only" submission. 
    //Will Need to Return Head Node 
    Node trackedHeadNode = head;
    
    Node nodeToInsert = new Node(); nodeToInsert.data = data;
    
    //Empty List - Returned newly created node or null
    if (head==null){return nodeToInsert;}
    
    //Inserting a Node ahead of the List
    if (position == 0){nodeToInsert.next = head; return nodeToInsert;}    
    
    //Traverse the Singly Linked List to 1 Position Prior
    //Stop traversing if you reached the end of the List
    int currPosition = 0;
    
    while (currPosition < position -1 && head.next != null){
        head = head.next;        
        currPosition++;       
    }

    //Inserting a Node in-between a List or at the end of of a List
    Node nodeAtPosition = head.next;
    head.next = nodeToInsert;
    head = head.next;
    head.next = nodeAtPosition;
        
    return trackedHeadNode;
}

