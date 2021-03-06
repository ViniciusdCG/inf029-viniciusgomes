#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include <stddef.h>
#include "fun.h"
#define TAM 20
#define HAM 12

void menu1();
void menu2();
void menu3();
int ValidaData();
int cadAluno();
int cadProfessor();
int cadDisc();
void listProf();
void listAlunos();
void listDis();

int main(void) {
  pessoa alunos[TAM];
  pessoa professores[TAM];
  disciplina subject[TAM];
  int cntrl_alunos = 0;
  int cntrl_professores = 0;
  int cntrl_subjects = 0;
  int sair_menu = 0;
  int opcao_menu;
  int opcao_cadastro;

  while (!sair_menu){
        menu1();
        scanf("%d", &opcao_menu);
        switch(opcao_menu){

        case 0 :{
                printf("Saiu!\n");
                sair_menu = 1;
                break;
            }
        case 1:{
        menu2();
        scanf("%d", &opcao_cadastro);
        switch (opcao_cadastro){
            case 0 :{
                printf("Saiu!\n");
                sair_menu = 1;
                break;

              }
            case 1: {
              int resultado;
              printf(" -- Cadastrar Aluno --\n\n");
              resultado = cadAluno(alunos, cntrl_alunos);
              if(resultado == 1){
               printf("Cadastrado com sucesso!\n\n");
               cntrl_alunos++;
               }
               else{
                printf("\n\nErro desconhecido!\n\n");
                }
              break;
              }
            case 2: {
              printf(" -- Cadastrar Professor --\n\n");
                int resultado;
                resultado = cadProfessor(professores, cntrl_professores);
                if(resultado == 1){
                  printf("Cadastrado com sucesso!\n");
                  cntrl_professores++;
                   }
                else{
                  printf("\n\nErro desconhecido!\n\n");
                }
              break;
              }
            case 3: {
              printf(" -- Cadastrar Disciplina --\n\n");
              int resultado; 
              resultado = cadDisc(subject, cntrl_subjects);
              if (resultado == 1){
                printf("Disciplina cadastrada com sucesso!\n");
                cntrl_subjects++;
              }
              else{
                printf("\n\nErro desconhecido!\n\n");
              }
              break;
              }

            default:{
              printf("Opcao incorreta, tente novamente!\n");
              break;
              }
        }
        break;
        }
        case 2:{
          int sair_relat = 0;
                int opcao_relatorio;

                printf("-- Listas -- \n\n");

                while (!sair_relat){
                    menu3();
                    scanf("%d", &opcao_relatorio);

                    switch (opcao_relatorio){
                        case 0: {
                            printf("Saiu\n\n");
                            sair_relat = 1; 
                            break;
                        }

                        case 1: {
                            printf("-- Listar Alunos -- \n\n");
                            listAlunos(alunos, cntrl_alunos);
                            break;
                        }

                        case 2: {
                            printf("-- Listar professores -- \n\n");
                            listProf(professores, cntrl_professores);
                            break;
                        }

                        case 3: {
                            printf("-- Listar Disciplina -- \n\n");
                            listDis(subject, cntrl_subjects);
                            break;
                        }
                        default: {
                            printf("Opcao incorreta, tente novamente!\n");
                            break;
                        }
                    }
                }
        }
      }
  }
}