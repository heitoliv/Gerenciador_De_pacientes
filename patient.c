#include "patient.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <assert.h>

struct pacient
{
    int id;
    char cpf[15];
    char name[100];
    int age;
    struct tm* data;
};

// Define a structure for the linked list.
struct list
{
    ListNode *first; // A pointer to the first node in the linked list.
};

// Define a structure for a node in the linked list.
struct list_node
{
    Pacient* info;       // An integer value stored in the node.
    ListNode* next; // A pointer to the next node in the linked list.
};

// Function to create an empty linked list and return a pointer to it.
LinkedList *ll_create()
{
    LinkedList* l = (LinkedList *)malloc(sizeof(LinkedList)); // Allocate memory for the list structure.
    l->first = NULL;                                          // Initialize the 'first' pointer to NULL, indicating an empty list.
    return l;                                                 // Return a pointer to the newly created list.
}

Pacient *new_pacient(int id, int age)
{
    Pacient *patient = (Pacient*)malloc(sizeof(Pacient));
    assert(patient != NULL); // Ensure memory allocation was successful

    patient->id = id;
        // patient->cpf = cpf;

    char *name_patient = {"heitor"}; // Generate a name for the patient 
    strncpy(patient->name, name_patient, sizeof(patient->name) - 1); // Copy the name to the patient structure
    patient->name[sizeof(patient->name) - 1] = '\0';
    patient->age = age;
   
    return patient;
}

void print_patient(Pacient *patient)
{
   printf("Patient ID: %d, Name: %s\n", patient->id, patient->name); // Print patient details
}

// Function to check whether the linked list is empty.
int ll_is_empty(LinkedList *l)
{
    return l->first == NULL; // Check if the 'first' pointer is NULL, indicating an empty list.
}

// Function to insert an element at the beginning of the linked list.
void ll_insert(LinkedList* l, Pacient* pacients)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode)); // Allocate memory for a new node.
    node->info = pacients;                                        // Set the 'info' field of the new node to the provided value.
    node->next = l->first;                                 // Make the new node point to the current first node.
    l->first = node;                                       // Update the 'first' pointer to point to the new node.
}

int get_id(Pacient *pacient)
{
    return pacient->id;
}
// void ll_print(LinkedList *l)
// {
//     for (ListNode *p = l->first; p != NULL; p = p->next)
//     {
//         printf("%d ", p->info); // Print the 'info' field of each node.
//     }
//     printf("\n"); // Print a newline character to separate the output.
// }