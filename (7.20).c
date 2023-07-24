#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node* next;
};

typedef struct node node;
node* head = NULL, * tail = NULL, * temp = NULL, * queue = NULL;		// 원래 데이터를 망가뜨리지 않기 위해 변수 queue 정의
void insert(int);
void delete();
void printf_queue();
void release();
int search(node*);		// 입력된 수의 크기 비교 및 비교를 토대로 원하는 위치에 삽입

int main()
{
	int x, d;
	do {
		printf("Queue --- 1.삽입, 2.삭제, 3.출력, 0.끝\nInput: ");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			printf("\n데이터 입력: ");
			scanf("%d", &d);
			insert(d);
			break;
		case 2:
			delete();
			break;
		case 3:
			printf_queue();
			break;
		case 0:
			release();
			return 0;
		}
		printf("\n\n");
	} while (1);
}

void insert(int x) {
	temp = malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;

	search(temp);

	if (tail != NULL)
		tail->next = temp;		// tail의 주소값을 통해 저장되어있던 next값을 temp의 주소값으로 설정
	tail = temp;				// tail의 주소를 새로워진 temp의 주소값으로 변경 (값 자체가 바뀌는 게 아니라 메모리 안의 값은 그대로 남아있고 주소만 바뀌는 것
	if (head == NULL)
		head = temp;

	printf(" temp : %d, head : %d, tail : %d \n", temp->data, head->data, tail->data);
	printf("\n%d가 삽입되었습니다.\n", x);
	printf_queue();
	return;
}

void delete() {
	int x;
	if (head == NULL) {
		printf("\nQueue is empty!!!\n");
		return;
	}
	temp = head;
	head = head->next;
	if (!head)
		tail = NULL;
	x = temp->data;
	free(temp);
	printf("%d가 삭제되었습니다.\n", x);
	printf_queue();
	return;
}

void printf_queue() {
	if (head == NULL) {
		printf("Queue is empty!\n");
		return;
	}
	temp = head;
	printf("현재 큐의 내용(head...tail): ");
	while (temp) {
		printf("%d", temp->data);
		temp = temp->next;
	}
	return;
}

void release() {
	while (head) {
		temp = head;
		head = head->next;
		free(temp);
	}
}

int search(node* temp) {
	if(head->data == NULL)
		return 0;
	
}
