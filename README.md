# Phonebook App using Singly Linked List

## Introduction

This phonebook app utilizes a singly linked list data structure to store and manage contacts efficiently. A singly linked list consists of nodes, where each node contains data and a reference to the next node. This data structure is particularly useful for scenarios where dynamic operations like inserting, deleting, and merging are frequently performed.

## Fundamentals of a Singly Linked List

A singly linked list is a linear data structure that consists of nodes connected in a sequential manner. Each node contains two components:
- Data: The actual information stored in the node, such as contact details in our phonebook app.
- Next: A reference or link to the next node in the list.

The first node in the list is called the head, which serves as the starting point for traversal. The last node points to null, indicating the end of the list.

## Importance of Singly Linked List

The singly linked list offers several advantages that make it suitable for the phonebook app:
- Efficient Insertion and Deletion: Adding or removing a node from a linked list involves adjusting the references, which has a constant time complexity of O(1) for operations at the head and O(n) for operations at arbitrary positions.
- Dynamic Size: Singly linked lists can dynamically grow and shrink as new contacts are added or removed, without the need for resizing operations.
- Flexibility: Nodes in a linked list can be easily rearranged, sorted, and merged, providing flexibility in managing and organizing the contacts.

## Functionality in the Phonebook App

### Sorting
The sorting operation is essential for organizing the contacts in alphabetical order by name. By implementing a sorting algorithm, the linked list nodes can be rearranged to maintain the desired order.

### Deleting/Inserting at Index
The phonebook app allows users to add or remove contacts at specific positions. The `delete_at_index` function removes a contact by adjusting the references of the previous and next nodes. The `insert_at_index` function adds a new contact by updating the references accordingly.

### Comparing
To ensure data consistency, the app provides a comparison feature to compare the current contact list with another list. The `compare` function checks if two linked lists contain the same contacts in the same order, allowing users to identify any differences or duplicates.

### Merging
When combining contact lists from different sources, the merging operation is used. The `merge` function merges two linked lists while maintaining the sorting order, resulting in a consolidated and sorted contact list.

### Printing
The `print_list` function enables the app to display the contacts by iterating through the linked list and printing the contact information for each node. This allows users to view their contact details easily.

## Conclusion

A singly linked list is a fundamental data structure that offers efficient insertion, deletion, and dynamic size. In the phonebook app, the linked list enables essential functionalities like sorting, deleting/inserting at index, comparing, merging, and printing. These operations enhance the organization and management of contacts, providing a comprehensive and user-friendly phonebook experience.
