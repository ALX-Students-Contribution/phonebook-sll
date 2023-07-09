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
	insert_node_at_index(&head, 4, "Jane Doe", 27123, "awe@gmail.com");
	insert_node_front(&head, "John Doe", 76123, "alx@gmail.com");
	insert_node_end(&head, "People Doe", 7123, "awe@gmail.com");
	insert_node_at_index(&head, 2, "Jane Doe", 27123, "awe@gmail.com");
	insert_node_front(&head, "John Doe", 76123, "test@gmail.com");
	insert_node_end(&head, "People Boe", 7123, "bwe@gmail.com");
	insert_node_at_index(&head, 1, "Bane Doe", 27123, "awe@gmail.com");
	insert_node_front(&head, "Joh", 76123, "abc@gmail.com");
	insert_node_end(&head, "Doe", 7123, "zxc@gmail.com");

	printf("After Insert \n");
	print_list(head);
	return (0);
}
