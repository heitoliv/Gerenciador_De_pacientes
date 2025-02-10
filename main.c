#include "patient.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int id;
int main(void)
{  
    //Criação da lista e arquivo vinculado a mesma
    LinkedList* list = ll_create();
    FILE *filename;
    filename = fopen("bd_paciente.csv", "a");
    if (filename == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    inserir_dados_csv(list);
    id = contar_id(filename);

    char escolha;
    int sair = 0;
    char opcao_menu;
    char nome[100];
    char cpf[12];

    while(sair == 0)
    {
        print_menu(); // Mostra o menu

        scanf(" %c", &opcao_menu);

        if (opcao_menu == '1')
        {   
            
            int escolha;
            printf("Escolha o modo de consulta:\n");
            printf("1 - Por nome\n");
            printf("2 - Por CPF\n");
            printf("3 - Retornar ao menu principal\n");
            printf("\n");

            scanf("%d", &escolha);

            if(escolha == 1)
            {
                printf("Digite o nome:\n ");
        
                // Garantir que qualquer caractere de nova linha remanescente seja consumido
                getchar();  // Remove o '\n' do buffer

                fgets(nome, sizeof(nome), stdin); // Lê o nome completo, incluindo espaços
                nome[strcspn(nome, "\n")] = 0;    // Remove o '\n' no final, caso exista
                ll_nome_is_in(list,nome);

            }
            if( escolha == 2)
            {
                printf("Digite o cpf:\n ");
        
                // Garantir que qualquer caractere de nova linha remanescente seja consumido
                getchar();  // Remove o '\n' do buffer

                fgets(cpf, sizeof(cpf), stdin); // Lê o nome completo, incluindo espaços
                cpf[strcspn(cpf, "\n")] = 0;    // Remove o '\n' no final, caso exista
                ll_cpf_is_in(list,cpf);

            }
            else
            {
                printf("\n");
                print_menu(); //Mostra o menu
            }
        }
        if (opcao_menu == '2')
        {
            int id_patient;
            ll_print(list);
            printf("Digite o ID do registro a ser atualizado:\n");
            scanf(" %d",&id_patient);
            Pacient* patient = update_patient(list, id_patient);
            printf("Confirma os novos valores para o registro abaixo? (S/N)\n");
            print_patient(patient);
            scanf(" %c", &escolha);  // A correção aqui é o espaço antes de %c

            if (escolha == 'S')
            {
                ll_insert(list, patient);
                escrever_arquivo_csv(patient);
                fflush(filename);  // Garante que o conteúdo seja gravado imediatamente no arquivo
                printf("Registro atualizado com sucesso.\n");
                id++;
            }
            else
            {
                // invocar a função que plota o menu
            }
        }
        if (opcao_menu == '3')
        {
            /* Remover */
        }
        if (opcao_menu == '4')
        {
            printf("\n");
            Pacient* patient = new_pacient(id);
            printf("\n");
            printf("Confirma os novos valores para o registro abaixo? (S/N)\n");
            print_patient(patient);
            scanf(" %c", &escolha);  // A correção aqui é o espaço antes de %c

            if (escolha == 'S')
            {
                ll_insert(list, patient);
                escrever_arquivo_csv(patient);
                fflush(filename);  // Garante que o conteúdo seja gravado imediatamente no arquivo
                printf("O registro foi inserido com sucesso.\n");
                id++;
            }
            else
            {
                // invocar a função que plota o menu
            }
        }
        if (opcao_menu == '5')
        {
            ll_print(list);
        }
        if (opcao_menu == 'Q')
        {
            ll_free(list);  
            sair = 1;
        }
        printf("\n");
    }

    fclose(filename);  // Fechar o arquivo após terminar a manipulação
    return 0;
}