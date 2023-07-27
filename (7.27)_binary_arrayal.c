#define _CRT_SECURE_NO_WSRNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>


#define SIZE 10
typedef int Data;

struct node{
	Data		data;
	struct node* left;
	struct node* right;
};

typedef struct node Node;
typedef Node* Btree;

void add_node(Btree, Btree, Data);
Btree new_node(Data d1);
void inorder(Btree);
void release(Btree);
Btree Root = NULL;

int main() {
	Data a, tree_data[SIZE];
	int i;
	srand(time(0));

	for (i = 0; i < SIZE; i++) {
		tree_data[i] = rand();
		printf(" %d \n", tree_data[i]);
	}

	for (i = 0; i < SIZE; i++)
		add_node(NULL, Root, tree_data[i]);

	printf("---Inorder binary tree traversal:\n");
	inorder(Root);
	release(Root);
}


void add_node(Btree parent, Btree c_node, Data x) {		// 새로운 메모리에 넣어주기
	if (Root == NULL) {
		Root = new_node(x);
		return;
	}
	else {
		if (c_node == NULL) {
			if (parent->data >= x) {
				parent->left = new_node(x);
			}
			else {
				parent->right = new_node(x);
			}
		}
		else if (x >= c_node->data)
			add_node(c_node, c_node->right, x);
		else
			add_node(c_node, c_node->left, x);

	}
	return;
}

Btree new_node(Data d) {		// 새로운 메모리 할당(더 작은 수의 공간이 필요하다면 그 공간을 할당)
	Btree t;
	t = (Btree)malloc(sizeof(Node));
	assert(t != NULL);
	t->data = d;
	t->left = NULL;
	t->right = NULL;
	return t;
}

void inorder(Btree tree) {
	if (tree != NULL) {
		inorder(tree->left);			
		printf("%10d", tree->data);		
		inorder(tree->right);
	}
}


void release(Btree tree) {
	if (tree != NULL) {
		release(tree->left);
		release(tree->right);
		free(tree);				// 메모리 전부 해제
	}
}
