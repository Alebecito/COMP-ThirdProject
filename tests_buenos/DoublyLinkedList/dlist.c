#include "dlist.h"
// #include <malloc.h>

struct ListNode {
	void* data;
	struct ListNode* next;
	struct ListNode* prev;
};

struct List {
	int itemSize;
	struct ListNode* head;
	struct ListNode* tail;
	int size;
};

void* dlist_create(int itemSize) {
	if (itemSize == 0) {
		return NULL;
	}
	struct List* dlist = (struct List*)malloc(sizeof(struct List));
	if (dlist == NULL) {
		return NULL;
	}
	dlist->size = 0;
	dlist->itemSize = itemSize;
	((struct List*)dlist)->head = NULL;
	((struct List*)dlist)->tail = NULL;
	return dlist;
}

void* dlist_init(void* dlist, int itemSize, void(*destroy)(void*)) {
	if (dlist == NULL) {
		return NULL;
	}
	if (itemSize == 0) {
		dlist_destroy(dlist, destroy);
		return 0;
	}
	if (((struct List*)dlist)->head != NULL) {
		dlist_destroy(dlist, destroy);
		dlist = dlist_create(itemSize);
	}
	else {
		((struct List*)dlist)->itemSize = itemSize;
	}
	return dlist;
}

void dlist_destroy(void* dlist, void(*destroy)(void*)) {
	if (dlist == NULL) {
		return;
	}
	dlist_clear(dlist, destroy);
	free(dlist);
}

static void delete_node(struct ListNode* tmp, void delete_func(void*)) {
	if (tmp != NULL) {
		if (tmp->data != NULL) {
			if (delete_func != NULL) {
				delete_func(tmp->data);
			}
			free(tmp->data);
		}
		free(tmp);
	}
}

void dlist_clear(void* dlist, void(*destroy)(void*)) {
	if (dlist == NULL) {
		return;
	}
	struct ListNode* tmp;
	while (((struct List*)dlist)->tail != ((struct List*)dlist)->head) {
		tmp = ((struct List*)dlist)->tail;
		if (tmp != NULL) {
			((struct List*)dlist)->tail = ((struct List*)dlist)->tail->prev;
			delete_node(tmp, destroy);
		}
		else {
			if (((struct List*)dlist)->head != NULL) {
				((struct List*)dlist)->head = NULL;
			}
		}
	}
	if (((struct List*)dlist)->tail != NULL && ((struct List*)dlist)->head != NULL) {
		if (((struct List*)dlist)->tail->data != NULL) {
			if (destroy != NULL) {
				destroy(((struct List*)dlist)->tail->data);
			}
			free(((struct List*)dlist)->tail->data);
			((struct List*)dlist)->tail->data = NULL;
		}
		free(((struct List*)dlist)->tail);
		((struct List*)dlist)->tail = NULL;
	}
	((struct List*)dlist)->size = 0;
}

int dlist_count(const void* dlist)
{
	if (dlist == NULL) {
		return INVALID;
	}
	return ((struct List*)dlist)->size;
}

void* dlist_item(void* dlist, int i) {
	if (dlist == NULL) {
		return NULL;
	}
	if (((struct List*)dlist)->head == NULL) {
		return NULL;
	}
	struct ListNode* tmp = NULL;
	if (((struct List*)dlist)->size < i) {
		return NULL;
	}
	tmp = ((struct List*)dlist)->head;
	for (int j = 0; j != i; j++) {
		if (tmp != NULL) {
			tmp = tmp->next;
		}
	}
	if (tmp != NULL) {
		return tmp->data;
	}
	return NULL;
}

void* dlist_append(void* dlist) {
	if (dlist == NULL) {
		return NULL;
	}
	struct ListNode* tmp;
	tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
	if (tmp == NULL) {
		return NULL;
	}
	tmp->data = (void*)malloc(((struct List*)dlist)->itemSize * sizeof(char));
	if (tmp->data == NULL) {
		return NULL;
	}
	tmp->next = NULL;
	tmp->prev = ((struct List*)dlist)->tail;
	if (((struct List*)dlist)->tail == NULL) {
		((struct List*)dlist)->tail = tmp;
		((struct List*)dlist)->head = tmp;
		((struct List*)dlist)->size = 1;
	}
	else {
		((struct List*)dlist)->tail->next = tmp;
		((struct List*)dlist)->tail = tmp;
		((struct List*)dlist)->size++;
	}
	return ((struct List*)dlist)->tail->data;
}

void* dlist_prepend(void* dlist) {
	if (dlist == NULL) {
		return NULL;
	}
	struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
	if (tmp == NULL) {
		return NULL;
	}
	tmp->data = (void*)malloc(((struct List*)dlist)->itemSize * sizeof(char));
	if (tmp->data == NULL) {
		return NULL;
	}
	tmp->prev = NULL;
	tmp->next = ((struct List*)dlist)->head;
	if (((struct List*)dlist)->head != 0) {
		((struct List*)dlist)->head->prev = tmp;
	}
	if (((struct List*)dlist)->size == 0) {
		((struct List*)dlist)->head = ((struct List*)dlist)->tail = tmp;
	}
	else {
		((struct List*)dlist)->head = tmp;
	}
	((struct List*)dlist)->size++;
	return ((struct List*)dlist)->head->data;
}

void dlist_removeFirst(void* dlist, void(*destroy)(void*)) {
	if (((struct List*)dlist) == NULL) {
		return;
	}
	if (((struct List*)dlist)->head == NULL || ((struct List*)dlist)->tail == NULL) {
		return;
	}
	if (((struct List*)dlist)->tail == ((struct List*)dlist)->head) {
		((struct List*)dlist)->tail = NULL;
	}
	struct ListNode* temp = ((struct List*)dlist)->head->next;
	delete_node(((struct List*)dlist)->head, destroy);
	if (((struct List*)dlist)->tail == NULL) {
		((struct List*)dlist)->head = NULL;
	}
	if (temp != NULL) {
		temp->prev = NULL;
		((struct List*)dlist)->head = temp;
		if (((struct List*)dlist)->tail == NULL) {
			((struct List*)dlist)->tail = ((struct List*)dlist)->head;
		}
	}
	((struct List*)dlist)->size--;
}

void dlist_removeLast(void* dlist, void(*destroy)(void*)) {
	if (dlist == NULL) {
		return;
	}
	if (((struct List*)dlist)->tail == NULL) {
		return;
	}
	if (((struct List*)dlist)->tail == ((struct List*)dlist)->head) {
		((struct List*)dlist)->head = NULL;
	}
	struct ListNode* temp = ((struct List*)dlist)->tail->prev;
	delete_node(((struct List*)dlist)->tail, destroy);
	if (((struct List*)dlist)->head == NULL) {
		((struct List*)dlist)->tail = NULL;
	}
	if (temp != NULL) {
		temp->next = NULL;
		((struct List*)dlist)->tail = temp;
	}
	((struct List*)dlist)->size--;
}

int dlist_first(const void* dlist) {
	if (((struct List*)dlist) != NULL) {
		if (((struct List*)dlist)->head != NULL) {
			return (int)((struct List*)dlist)->head;
		}
	}
	return 0;
}

int dlist_last(const void* dlist) {
	if (((struct List*)dlist) != NULL) {
		if (((struct List*)dlist)->tail != NULL) {
			return (int)((struct List*)dlist)->tail;
		}
	}
	return 0;
}

int dlist_next(const void* dlist, int item_id) {
	if (dlist == NULL) {
		return 0;
	}
	if (item_id == 0) {
		return 0;
	}
	struct ListNode* tmp = (struct ListNode*)item_id;
	if (tmp != NULL) {
		if (tmp->next != NULL) {
			return (int)tmp->next;
		}
	}
	return 0;
}

int dlist_prev(const void* dlist, int item_id) {
	if (dlist == NULL) {
		return 0;
	}
	if (item_id == 0) {
		return 0;
	}
	struct ListNode* tmp = (struct ListNode*)item_id;
	if (tmp != NULL) {
		if (tmp->prev != NULL) {
			return (int)tmp->prev->data;
		}
	}
	return 0;
}

int dlist_stop(const void* dlist) {
	return 0;
}

void* dlist_current(const void* dlist, int item_id) {
	if (dlist == NULL || item_id == dlist_stop(dlist)) {
		return NULL;
	}
	return (void*)((struct ListNode*)item_id)->data;
}

static struct ListNode* dlist_add_elem(void* dlist, struct ListNode* tmp, struct ListNode* tempNextt, struct ListNode* tempPrevv) {
	struct ListNode* tempNext = tempNextt;
	struct ListNode* tempPrev = tempPrevv;
	tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
	if (tmp == NULL) {
		return NULL;
	}
	tmp->data = malloc(((struct List*)dlist)->itemSize * sizeof(char));
	if (tmp->data == NULL) {
		return NULL;
	}
	if (tempPrev != NULL) {
		tempPrev->next = tmp;
	}
	tmp->prev = tempPrev;
	if (tempNext != NULL) {
		tempNext->prev = tmp;
	}
	tmp->next = tempNext;
	((struct List*)dlist)->size++;
	return tmp->data;
}

static void* dlist_find_by_id(const void* dlist, int item_id) {
	if (dlist == NULL) {
		return NULL;
	}
	return (void*)((struct ListNode*)item_id);
}

void* dlist_insertAfter(void* dlist, int item_id) {
	if (dlist == NULL) {
		return NULL;
	}
	if (item_id == 0 && ((struct List*)dlist)->head != NULL) {
		return 0;
	}
	else if (item_id == 0 && ((struct List*)dlist)->head == NULL) {
		return dlist_append(dlist);
	}
	struct ListNode* tmp = dlist_find_by_id(dlist, item_id);
	if (tmp == NULL) {
		return NULL;
	}
	if (tmp->next == NULL) {
		return dlist_append(dlist);
	}
	else {
		return dlist_add_elem(dlist, tmp, tmp->next, tmp);
	}
}

void* dlist_insertBefore(void* dlist, int item_id) {
	if (dlist == NULL) {
		return NULL;
	}
	if (item_id == 0 && ((struct List*)dlist)->head != NULL) {
		return NULL;
	}
	else if (item_id == 0 && ((struct List*)dlist)->head == NULL) {
		return dlist_prepend(dlist);
	}
	struct ListNode* tmp = dlist_find_by_id(dlist, item_id);
	if (tmp == NULL) {
		return NULL;
	}
	if (tmp->prev == NULL) {
		return dlist_prepend(dlist);
	}
	else {
		return dlist_add_elem(dlist, tmp, tmp, tmp->prev);
	}
}

static void dlist_int_delete2(struct List* List, struct ListNode* node, void delete_func(void*)) {
	if (node == List->head) {
		List->head = node->next;
		if (List->head != NULL)
			List->head->prev = NULL;
	}

	else if (node == List->tail) {
		List->tail = node->prev;
		if (List->tail != NULL)
			List->tail->next = NULL;
	}
	else {
		struct ListNode* nodePrev = node->prev;
		struct ListNode* nodeNext = node->next;
		nodePrev->next = nodeNext;
		nodeNext->prev = nodePrev;
	}
	delete_node(node, delete_func);
	List->size -= 1;
}

static void dlist_int_delete(struct List* List, struct ListNode* node, void delete_func(void*)) {
	if (node == List->head && node == List->tail) {
		List->head = NULL;
		List->tail = NULL;
		List->size = 0;
	}
	if (node == List->head) {
		List->head = node->next;
		if (List->head != NULL)
			List->head->prev = NULL;
	}

	else if (node == List->tail) {
		List->tail = node->prev;
		if (List->tail != NULL)
			List->tail->next = NULL;
	}
	else {
		struct ListNode* nodePrev = node->prev;
		struct ListNode* nodeNext = node->next;
		if (nodePrev != NULL)
			nodePrev->next = nodeNext;
		if (nodeNext != NULL)
			nodeNext->prev = nodePrev;
	}
	delete_node(node, delete_func);
}

void dlist_erase(void* dlist, int item_id, void(*destroy)(void*)) {
	if (dlist == NULL) {
		return;
	}
	if (item_id == 0) {
		return;
	}
	struct ListNode* node = dlist_find_by_id(dlist, item_id);
	if (node != NULL) {
		dlist_int_delete((struct List*)dlist, node, destroy);
	}
	if (((struct List*)dlist)->size != 0) {
		((struct List*)dlist)->size--;
	}
}