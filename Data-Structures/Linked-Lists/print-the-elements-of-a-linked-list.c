/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *head_ptr = head;
    while (head_ptr != NULL) {
        printf("%d\n", head_ptr->data);
        head_ptr = head_ptr->next;
    }
}

