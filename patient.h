#ifndef PATIENT_H
#define PATIENT_H

#include <stdio.h>

// Define the LinkedList and ListNode data structures
typedef struct list LinkedList;    // Represents a linked list
typedef struct list_node ListNode; // Represents a node in the linked list

typedef struct pacient Pacient;

// Create an empty linked list and return a pointer to it
LinkedList* ll_create();

Pacient* new_pacient(int id);

void print_menu();

void formatar_cpf(Pacient *patient);

Pacient* update_patient(LinkedList *l, int id);

void ll_free(LinkedList *l);

// Insert an element at the beginning of the linked list
void ll_insert(LinkedList *l, Pacient *pacients);

// Check whether the linked list is empty
int ll_is_empty(LinkedList *l);

// Display all elements of the linked list
void ll_print(LinkedList *l);

int get_id(Pacient *pacient);

void print_patient(Pacient *patient);

int ll_nome_is_in(LinkedList *l, char *nome);

int ll_cpf_is_in(LinkedList *l,char *cpf);

//int verificar_csv_vazio(FILE *file);//sla se precisa
int escrever_arquivo_csv(Pacient *patient);

int contar_id();

int inserir_dados_csv(LinkedList *l);

Pacient* ll_is_in(LinkedList *l, int v);

#endif
