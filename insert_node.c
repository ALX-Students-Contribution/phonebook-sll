#include "main.h"
void print_list(contact *head)
{
	unsigned int count = 0;

	while(head->next)
	{
		printf("%i \n", count);
		printf("Name: %s \n", head->name);
		printf("Phone Number: %i \n", head->phone_number);
		printf("Email Address: %s \n", head->email_address);
		head = head->next;
		count++;
	}
}
contact *insert_node_at_index(contact **head, unsigned int index, char *name, unsigned int phone_number, char *email_address)
{
	contact *prev_node, *new_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(contact));
	if (new_node == NULL)
		return (NULL);
	new_node->name = name;
	new_node->phone_number = phone_number;
	new_node->email_address = email_address;
	new_node->next = NULL;

	prev_node = *head;
	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (count < index - 1 && prev_node != NULL)
	{
		prev_node = prev_node->next;
		count++;
	}
	if (prev_node != NULL)
	{
		new_node->next = prev_node->next;
		prev_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	printf("Index out of range. \n");
	return (NULL);
}
