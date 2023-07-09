#include "main.h"

/**
 * main - phonebook main program function
 *
 * Return: Always 0.
 */
int main(void)
{
	contact *head = NULL;
	unsigned int count = 0;

	while (count < 5)
	{
		insert_node_at_index(&head, count, "Thuba Tshehlane", 27123, "awesome@gmail.com");
		count++;	
	}
	print_list(head);
	insert_node_at_index(&head, 10, "Jane Doe", 27123, "awe@gmail.com");
	printf("After Insert \n");
	print_list(head);
	return (0);
}
