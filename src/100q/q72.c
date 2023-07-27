#include <stdio.h>

/*
 *题目：创建一个链表。
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct LNode {
	int data;
	struct LNode *next;
} LNode, *LinkList;

LinkList CreateList(int n);

void print(LinkList h);

int q72_1() {
	LinkList Head = NULL;
	int n;

	printf("请输入元素的个数:\n");
	fflush(stdout);
	scanf("%d", &n);
	Head = CreateList(n);

	printf("刚刚建立的各个链表元素的值为：\n");
	print(Head);

	printf("\n\n");
	system("pause");
	return 0;
}
LinkList CreateList(int n) {
	// present是当前正在声明的链表节点
	// last是前一个已经完成声明的链表节点
	// L是第一个链表元素
	LinkList L, present, last;
	int i;
	// 额外声明一个节点， 保存第一个链表节点
	L = (LNode*) malloc(sizeof(LNode));
	if (!L)
		return 0;
	L->next = NULL;
	last = L;
	// 对于第一个链表元素 只需要赋值，其前驱后继都为空，进行保存
	for (i = 1; i <= n; i++) {
		present = (LinkList) malloc(sizeof(LNode));
		printf("请输入第%d个元素的值:", i);
		fflush(stdout);
		scanf("%d", &(present->data));
		present->next = NULL;
		last->next = present;
		last = present;
	}
	return L;
}
void print(LinkList h) {
	LinkList p = h->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

typedef struct LNode2 {
	int data;
	struct LNode2 *next; // 后继
	struct LNode2 *prior; // 前驱
} LNode2, *LinkList2;

LinkList2 CreateList2(int n);
void print2(LinkList2 n, int x);

int q72_2() {
	LinkList2 Head = NULL;
	int n;
	printf("input the length of the linking table.\n");
	fflush(stdout);
	scanf("%d", &n);
	Head = CreateList2(n);
	printf("the value of link table:\n");
	print2(Head, n);
	return 0;
}

LinkList2 CreateList2(int n) {
	// p是当前正在声明的链表节点
	// q是前一个已经完成声明的链表节点
	// L是第一个链表元素
	LinkList2 L, p, q;
	int i;

	// 额外声明一个节点， 保存第一个链表节点
	L = (LNode2*) malloc(sizeof(LNode2));
	if (!L)
		return 0;
	for (i = 1; i <= n; i++) {
		p = (LinkList2) malloc(sizeof(LNode2));
		printf("input %dth value.\n", i);
		fflush(stdout);
		scanf("%d", &(p->data));
		// 对于第一个链表元素 只需要赋值，其前驱后继都为空，进行保存
		if (i == 1) {
			p->next = NULL;
			p->prior = NULL;
			L = p;
			q = p;
		}
		// 对于后继的链表节点，将其前驱置为q，将q的后继置为p
		else {
			p->next = NULL;
			p->prior = q;
			q->next = p;
			q = p;
		}
		// 如果是最后一个链表节点，将其与第一个元素连接。
		if (i == n) {
			L->prior = q;
			q->next = L;
		}
	}
	return q;
}

void print2(LinkList2 p, int n) {
	int i = 1;
	while (i <= n) {
		printf("%d ", p->data);
		if (p->prior != NULL) {
			printf("prior = %d\n", p->prior->data);
		}
		p = p->next;
		i++;
	}
}
