#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct contactlist - singly linked list struct for contact details
 * @name: full name of individual e.g. Jane Doe
 * @phone_number: phone number as 27123456789
 * @email_address: email address as awesome@email.com
 * @next: pointer to the next contact detail
 *
 * Description: singly linked list node of contact details structure
 *
 */
typedef struct contactlist
{
	char *name;
	unsigned int phone_number;
	char * email_address;
	struct contactlist *next;
} contact;

contact *insert_node_at_index(contact **head, unsigned int index, char *name, unsigned int phone_number, char *email_address);
void print_list(contact *head);
#endif /* MAIN_H */
