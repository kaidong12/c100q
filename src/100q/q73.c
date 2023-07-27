#include <stdio.h>

/*
 *题目：反向输出一个链表。
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct LNode {
	int data;
	struct LNode *next;
} LNode, *LinkList;

LinkList CreateList73(int n);
void PrintList73(LinkList h);

void ReverseList(LinkList h);

int q73() {
	LinkList Head = NULL;
	int n;
	printf("input number of number in list: \n");
	fflush(stdout);
	scanf("%d", &n);
	Head = CreateList73(n);

	printf("value of this linkedlist is: \n");
	PrintList73(Head);
	printf("\n\n");
	printf("reverse list: \n");
	ReverseList(Head);
	PrintList73(Head);
}

void ReverseList(LinkList h) {
	LinkList pre = NULL;
	LinkList cur = h->next;
	LinkList temp;
	while (cur) { //所有节点没有移动，只是指针方向相反了
		temp = cur->next; //缓存下一个节点的地址

		cur->next = pre; //指针指向相反方向

		pre = cur; //为下一次变换做准备
		cur = temp; //指针往后移一步，到下一个节点
	}

	//此时cur为NULL, pre为原LinkList最后一个节点
	h->next = pre;
}

LinkList CreateList73(int n) {
	LinkList l, p, q;
	l = (LinkList) malloc(sizeof(LNode));
	if (!l)
		return 0;
	l->next = NULL;
	q = l;
	for (int i = 0; i < n; i++) {
		p = (LinkList) malloc(sizeof(LNode));
		p->data = i;
		p->next = NULL;
		q->next = p;
		q = p;
	}
	return l;
}

void PrintList73(LinkList h) {
	LinkList p = h->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

