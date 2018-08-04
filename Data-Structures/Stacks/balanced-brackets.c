#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node {
	char data;
	int open;
	struct node* next;
}node;

node *temp, *top;

void insert(char, int);
void push(char, int);
void pop();
void display();

int main() {
	char s[100000];
	int l, i, t;
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        l = strlen(s);
        top = NULL;
        for(i=0; i<l; i++) {
            insert(s[i], i);
        }
        if(top == NULL) printf("YES
");
        else printf("NO
");    
    }
	//display();
	return 0;
}

void insert(char c, int i) {
	char x;
	if(top == NULL) {
		top = (node*) malloc(sizeof(node));
		top->data = c;
		top->open = i;
		top->next = NULL;
	}
	else {
		x = top->data;
		if(x=='[' && c==']') pop();
        else if(x=='(' && c==')') pop();
        else if(x=='{' && c=='}') pop();
		else push(c, i);
	}
}

void push(char c, int i) {
	temp = (node*) malloc(sizeof(node));
	temp->data = c;
	temp->open = i;
	temp->next = top;
	top = temp;
}

void pop() {
	temp = top;
	top = temp->next;
	free(temp);
}

void display() {
	int c = 0;
	temp = top;
	while(temp != NULL) {
		printf("%c ", temp->data);
		c = temp->open;
		temp = temp->next;
	}
}
