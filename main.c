#include "patient.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int id = 1;

int main(void)
{   
    char *cpf;
    char *name;
    int age;
    
    // // LinkedList* list;
    // const char *filename = "bd_paciente.csv";

    // LinkedList *list = ll_create();

    // FILE *file = fopen(filename, "w");
    // if (file == NULL){
    //     printf("ERRO.\n");
    // }
    // fprintf(file,"ID,CPF,Nome,Idade,Data_Cadastro\n");

    char opcao;

    /*
    time(&tempo)
    data_atual = localtime(&tempo)
    tm_mday
    tm_mon+1
    tm_year +1900
    */

    printf("Healthy Sys \n");
    printf("\n");
    printf("1 - Consultar paciente\n");
    printf("2 - Atualizar paciente\n");
    printf("3 - Remover paciente\n");
    printf("4 - Inserir paciente\n");
    printf("5 - Imprimir lista de paciente\n");
    printf("Q - Sair\n");

    scanf("%c", &opcao);
    if (opcao == '1')
    {
        /* Consulta */
    }
    if (opcao == '2')
    {
        /* Atualizar*/
    }
    if (opcao == '3')
    {
        /* Remover */
    }
    if (opcao == '4')
    {
        
        int age = 22;
        printf("DEBUG 1\n");
        Pacient* patient = new_pacient(id, age);
        printf("%d\n", get_id(patient));
        print_patient(patient);
        
        id++;
        age = 24;
        Pacient* patient2 = new_pacient(id, age);
        printf("DEBUG 2\n");        
        printf("%d\n", get_id(patient2));
        print_patient(patient2);
        
        
        //fprintf(file, "%d,%s,%s,%d,%d\n", patient->id, patient->cpf, patient->name, patient->age, patient->data->tm_year);
    }
    if (opcao == '5')
    {
        /*SHJAHSJ*/
    }
    if (opcao == 'Q')
    {
        /* Sair */
    }
    
    
    
    

    return 0; // Return 0 to indicate successful program execution.
}