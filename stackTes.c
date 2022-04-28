#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef int element;
// ���� ���ð� ���� ť�� ���
typedef struct ListNode {
	element data;
	struct listNode* link;
} listNode;
typedef struct LinkedStack { // Stack�� top�� ǥ���� ����ü
	listNode* top;
	int length;
} Stack;
typedef struct LinkedQueue { // Queue�� front, rear�� ǥ���� ����ü
	listNode* front, * rear;
} Queue;
// ���齺�� ����
Stack* createStack() {
	Stack* S = (Stack*)malloc(sizeof(Stack));
	S->top = NULL;
	S->length = 0;
	return S;
}
// ����ť ����
Queue* createQueue() {
	Queue* Q = (Queue*)malloc(sizeof(Queue));
	Q->front = NULL;
	Q->rear = NULL;
	return Q;
}
// ������ ��� ��� ���
void displayStack(Stack* S) {
	listNode* p = S->top;
	printf("STACK [ ");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf(" ]\n");
}

int main() {
	
	FILE* S = fopen("C:/Users/kv062/Downloads/stack_status.txt", "r");
	
	
	createStack(S);
	displayStack(S);
	
	int k;
	printf("k �Է�: ");
	scanf("%d", &k);

	int i;
	switch (k) 
	{
		case 1:
			displayStack(S);
		case 2:
			pop(S[0], S[1]);
			push(S[0]);
			push(S[1]);
			displayStack(S);
		case 3:
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			displayStack(S);
		case 4:
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			displayStack(S);
		case 5:
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			displayStack(S);
		case 6:
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			displayStack(S);
		case 7:
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			for (i = 0; i < k; i++) {
				pop(S[i]);
			}
			displayStack(S);
		default:
			printf("�߸��� �Է��Դϴ�.");

	}
	fclose(S);
	return 0;
}