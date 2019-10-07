

      Node* insert(Node *head,int data)
      {
          Node* node = new Node(data);
          if (head == NULL) {
              head = node;
          }
          else {
              Node* cur = head;
              while(cur->next != NULL) {
                cur = cur->next;
              }
              cur->next = node;
          }
          return head;
      }

