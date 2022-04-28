#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef int element;
// 연결 스택과 연결 큐의 노드
typedef struct ListNode {
	element data;
	struct listNode* link;
} listNode;
typedef struct LinkedStack { // Stack의 top을 표현할 구조체
	listNode* top;
	int length;
} Stack;
typedef struct LinkedQueue { // Queue의 front, rear를 표현할 구조체
	listNode* front, * rear;
} Queue;
// 공백스택 생성
Stack* createStack() {
	Stack* S = (Stack*)malloc(sizeof(Stack));
	S->top = NULL;
	S->length = 0;
	return S;
}
// 공백큐 생성
Queue* createQueue() {
	Queue* Q = (Queue*)malloc(sizeof(Queue));
	Q->front = NULL;
	Q->rear = NULL;
	return Q;
}
// 스택의 모든 요소 출력
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
	printf("k 입력: ");
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
			printf("잘못된 입력입니다.");

	}
	fclose(S);
	return 0;
}