#ifndef PATIENT_H
#define PATIENT_H

// Define the LinkedList and ListNode data structures
typedef struct list LinkedList;    // Represents a linked list
typedef struct list_node ListNode; // Represents a node in the linked list

typedef struct pacient Pacient;

// Create an empty linked list and return a pointer to it
LinkedList *ll_create();

Pacient* new_pacient(int id, char* cpf, char* name, int age);

// Insert an element at the beginning of the linked list
void ll_insert(LinkedList *l, Pacient *pacients);

// Check whether the linked list is empty
int ll_is_empty(LinkedList *l);

// Display all elements of the linked list
void ll_print(LinkedList *l);

#endif