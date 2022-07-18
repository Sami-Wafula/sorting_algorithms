#ifndef MAIN_H 
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef UNDEF
#define UNDEF -1
#endif
#ifndef SWAP
#define SWAP(array, a, b) \
	{                       \
		temp = array[a];       \
		array[a] = array[b];  \
		array[b] = temp;       \
	}
#endif

/**
 * struct listint_s - Represents a doubly linked list node.
 * @n: Integer stored in the node.
 * @prev: Pointer to the previous element of the list.
 * @next: Pointer to the next element of the list.
 */
typedef struct listint_s
{
	/* Integer stored in the node. */
	const int n;
	/* Pointer to the previous element of the list. */
	struct listint_s *prev;
	/* Pointer to the next element of the list. */
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_items(int *array, size_t l, size_t r);
void bubble_sort(int *array, size_t size);
#endif
