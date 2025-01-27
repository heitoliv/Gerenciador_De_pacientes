#include "patient.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)
{   
    char cpf[15];
    char name[100];
    int age;
    
    // LinkedList* list;
    const char *filename = "bd_paciente.csv";

    LinkedList *list = ll_create();

    FILE *file = fopen(filename, "w");
    if (file == NULL){
        printf("ERRO.\n");
    }
    fprintf(file,"ID,CPF,Nome,Idade,Data_Cadastro\n");

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

        printf("Para inserir um novo registro, digite os valores para os campos CPF (apenas dígitos), Nome, Idade e Data_Cadastro:\n");
        int id = id++;
        scanf("%s",&cpf);
        scanf("%s",&name);
        scanf("%d",&age);
        Pacient* patient = new_pacient(id, cpf, name, age);
        
        printf("%d,%s,%s,%d,%d\n", patient->id, patient->cpf, patient->name, patient->age, patient->data->tm_year);
    
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