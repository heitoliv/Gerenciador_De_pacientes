#include "patient.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int id = 1;
int main(void)
{  
    LinkedList* list = ll_create();
    // const char *filename = "bd_paciente.csv";


    // FILE *file = fopen(filename, "w");
    // if (file == NULL){
    //     printf("ERRO.\n");
    // }
    // fprintf(file,"ID,CPF,Nome,Idade,Data_Cadastro\n");

    char escolha;
    int sair = 0;
    char opcao_menu;

    while(sair == 0)
    {
        printf("Healthy Sys \n");
        printf("\n");
        printf("1 - Consultar paciente\n");
        printf("2 - Atualizar paciente\n");
        printf("3 - Remover paciente\n");
        printf("4 - Inserir paciente\n");
        printf("5 - Imprimir lista de paciente\n");
        printf("Q - Sair\n");
        scanf(" %c", &opcao_menu);
        printf("\n");
        if (opcao_menu == '1')
        {
            /* Consulta */
        }
        if (opcao_menu == '2')
        {
            /* Atualizar*/
        }
        if (opcao_menu == '3')
        {
            /* Remover */
        }
        if (opcao_menu == '4')
        {
            printf("Para inserir um novo registro, digite os valores para os campos CPF(apenas digitos), Nome, Idade, e Data_Cadastro:\n");
            Pacient* patient = new_pacient(id);
            printf("Confirma os novos valores para o registro abaixo? (S/N)\n");
            print_patient(patient);
            scanf("%s",&escolha);
            if (escolha == 'S')
            {
                ll_insert(list, patient);
                printf("Registro atualizado com sucesso.\n");
                id++;
            }
            //fprintf(file, "%d,%s,%s,%d,%d\n", patient->id, patient->cpf, patient->name, patient->age, patient->data->tm_year);
        }
        if (opcao_menu == '5')
        {
            /*ll_print(list);*/
        }
        if (opcao_menu == 'Q')
        {
            sair = 1;
            /* Sair */
        }
        printf("\n");
    }

    return 0; // Return 0 to indicate successful program execution.
}