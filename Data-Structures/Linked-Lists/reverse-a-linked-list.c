// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* p) {
    if (p->next == NULL) {
        return p;
    }
    SinglyLinkedListNode* head = reverse(p->next);
    SinglyLinkedListNode* q = p->next;
    q->next = p;
    p->next = NULL;
    return head;
}
