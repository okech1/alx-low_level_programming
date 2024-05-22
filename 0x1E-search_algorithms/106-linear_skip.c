#include <stdio.h>
#include "search_algos.h"

skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *current = list;
if (list == NULL) {
return NULL;  // Handle empty list case
}
while (current != NULL) {
printf("Value checked at index [%zu] = [%d]\n", current->index, current->n);
if (current->n == value) {
return current;
}
if (value < current->n) {
current = current->express != NULL && current->express->n < value ?
current->express : current->next;
} else {
current = current->next;
}
}
return NULL;  // Value not found
}
