#ifndef LISTS_H
#define LISTS_H

/*Function that  Print list*/
size_t print_list(const list_t *h);

/*function that List length*/
size_t list_len(const list_t *h);

/*function that Add node*/
list_t *add_node(list_t **head, const char *str);

/*function that Add node at the end*/
list_t *add_node_end(list_t **head, const char *str);

/*function that Free list*/
void free_list(list_t *head);

#endif 
