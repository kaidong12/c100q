#include <stdio.h>

/*
 *题目：连接两个链表。
 *
 */

#include <stdlib.h>
#include <stdio.h>

struct list {
	int data;
	struct list *next;
};

typedef struct list node;
typedef node *link;

link delete_node(link pointer, link tmp) {
	if (tmp == NULL) /*delete first node*/
		return pointer->next;
	else {
		if (tmp->next->next == NULL)/*delete last node*/
			tmp->next = NULL;
		else
			/*delete the other node*/
			tmp->next = tmp->next->next;
		return pointer;
	}
}

void selection_sort(link pointer, int num) {
	link tmp, btmp;
	int i, min;
	for (i = 0; i < num; i++) {
		tmp = pointer;
		min = tmp->data;
		btmp = NULL;
		while (tmp->next) {
			if (min > tmp->next->data) {
				min = tmp->next->data;
				btmp = tmp;
			}
			tmp = tmp->next;
		}
		printf("%d\n", min);
		pointer = delete_node(pointer, btmp);
	}
}

link create_list(int array[], int num) {
	link tmp1, tmp2, pointer;
	int i;
	pointer = (link) malloc(sizeof(node));
	pointer->data = array[0];
	tmp1 = pointer;
	for (i = 1; i < num; i++) {
		tmp2 = (link) malloc(sizeof(node));
		tmp2->next = NULL;
		tmp2->data = array[i];
		tmp1->next = tmp2;
		tmp1 = tmp1->next;
	}
	return pointer;
}

link concatenate(link pointer1, link pointer2) {
	link tmp;
	tmp = pointer1;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = pointer2;
	return pointer1;
}

void PrintList74(link h) {
	link p = h->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

int q74(void) {
	int arr1[] = { 13, 12, 18, 19, 11 };
	int arr2[] = { 23, 22, 28, 29, 21 };
	link ptr1, ptr2, ptr3, temp;
	ptr1 = create_list(arr1, 5);
	ptr2 = create_list(arr2, 5);

	PrintList74(ptr1);
	PrintList74(ptr2);

	ptr3 = concatenate(ptr1, ptr2);
	PrintList74(ptr3);

//	selection_sort(ptr3, 10);
//	PrintList74(ptr3);

}
