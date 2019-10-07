#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node {
	int data;
	struct node* next;
}node;

node *temp, *top;

void push(int);
void pop();
void max();

int main() {
	int n, x, t;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &t);
		switch(t) {
			case 1: scanf("%d", &x); push(x); break;
			case 2: pop(); break;
			case 3: max();
		}
	}
	return 0;
}

void push(int i) {
	if(top == NULL) {
		top = (node*) malloc(sizeof(node));
		top->data = i;
		top->next = NULL;
	}
	else {
		temp = (node*) malloc(sizeof(node));
		temp->data = i;
		temp->next = top;
		top = temp;	
	}
}

void pop() {
	temp = top;
	top = temp->next;
	free(temp);
}

void max() {
	int c = top->data;
	temp = top;
	while(temp != NULL) {
		if(c<temp->data) c = temp->data;
		temp = temp->next;
	}
	printf("%d\n", c);
}