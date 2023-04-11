#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct list - singly linked list
 * 
 * @n: Int
 * @index: Index in the list
 * @next: Pointer to next node
 * 
 * Description: Singly linked list node structure
*/
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
}listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 * 
 * @n: Int
 * @index: Index of node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in express lane
 * 
 * Description: Singly linked list node structure with express lane
 * 
*/
typedef struct skiplistint_s
{
    int n;
    size_t index;
    struct skiplistint_s *next;
    struct skiplistint_s *express;
}skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
