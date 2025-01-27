#include "patient.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <assert.h>

struct pacient
{
    int id;
    char cpf[12];
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

char* get_cpf()
{
    char cpf[12];
    printf("Digite seu CPF: \n");
    scanf("%11s", cpf);
    char *cpf_ptr = (char *)malloc((strlen(cpf) + 1) * sizeof(char));
    if (cpf_ptr != NULL) {
        strcpy(cpf_ptr, cpf);
    }
    return cpf_ptr; 
}

char* get_name()
{
    char name[100];
    printf("Digite seu nome: \n");
    scanf("%99s", name);
    char *name_ptr = (char *)malloc((strlen(name) + 1) * sizeof(char));
    if (name_ptr != NULL) {
        strcpy(name_ptr, name);
    }
    return name_ptr; 
}

int get_age()
{
    int age_pacient;
    printf("Digite a sua idade:\n");
    scanf("%d", &age_pacient);

    return age_pacient;
}

Pacient *new_pacient(int id)
{

    Pacient *patient = (Pacient*)malloc(sizeof(Pacient));
    assert(patient != NULL); // Ensure memory allocation was successful

    patient->id = id;

    char* cpf_patient = get_cpf(); // Generate a cpf for the patient 
    strncpy(patient->cpf, cpf_patient, sizeof(patient->cpf) - 1); // Copy the cpf to the patient structure
    patient->cpf[sizeof(patient->cpf) - 1] = '\0';

    char* name_patient = get_name(); // Generate a name for the patient 
    strncpy(patient->name, name_patient, sizeof(patient->name) - 1); // Copy the name to the patient structure
    patient->name[sizeof(patient->name) - 1] = '\0';

    int age_patient = get_age(); 
    patient->age = age_patient;
   
    return patient;
}

void print_patient(Pacient *patient)
{
   printf("Patient ID: %d, CPF: %s, Name: %s, Idade: %d\n", patient->id, patient->cpf, patient->name, patient->age); // Print patient details
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