// #include <stdbool.h> // bool
// #include <stddef.h>  // int

int INVALID = 0;

void *dlist_create(int itemSize);

void dlist_destroy(void *dlist, void (*destroy)(void *));

void *dlist_init(void *dlist, int itemSize, void (*destroy)(void *));

void dlist_clear(void *dlist, void (*destroy)(void *));

int dlist_count(const void *dlist);

void *dlist_item(void *dlist, int i);

void *dlist_append(void *dlist);

void *dlist_prepend(void *dlist);

void dlist_removeFirst(void *dlist, void (*destroy)(void *));

void dlist_removeLast(void *dlist, void (*destroy)(void *));

int dlist_first(const void *dlist);

int dlist_last(const void *dlist);

int dlist_next(const void *dlist, int item_id);

int dlist_prev(const void *dlist, int item_id);

int dlist_stop(const void *dlist);

void *dlist_current(const void *dlist, int item_id);

void *dlist_insertAfter(void *dlist, int item_id);

void *dlist_insertBefore(void *dlist, int item_id);

void dlist_erase(void *dlist, int item_id, void (*destroy)(void *));