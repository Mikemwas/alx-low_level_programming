#define LISTS_H
#ifndef LISTS_H

/**
 * struct list_s - single Linked List
 * @str: string - (malloc 'ed string)
 * @len: whats the lengt of the string
 * @next: it points to the next node online
 *
 * Description: these singly Linked list contains node structure
 * for Holberton school projects
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
void free_list(list_t *head);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
ist_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
