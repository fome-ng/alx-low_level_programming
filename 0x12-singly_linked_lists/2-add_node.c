#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list_t list
 * @srt: string to be duplicated
 *
 * Return: the address of the new element, or Null if failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	unsigned int len;
	list_t *new;

	new = (list_t*) malloc(sizeof(list_t));
	if (new == NULL)
	{
		return NULL;
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	len = strlen(dup);

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return(new);
}
