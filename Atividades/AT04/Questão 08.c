#include <stdio.h>
#define LG 20
int cadastrocliente(char *name, char *date, char *cpf, char *sex){
  printf("Seu cadastro é:\n");
  printf("\nNome: %s\n", name);
  printf("Data de Nascimento: %s\n", date);
  printf("CPF: %s\n", cpf);
  printf("Sexo: %s\n", sex);
  return 0;
}
  
int main(void) {
  char nome[LG], data[LG], cpf[LG], sexo[LG];
  printf("Digite seu nome: \n");
  scanf("%s", nome);
  printf("Digite sua data de nascimento: \n");
  scanf("%s", data);
  printf("Digite seu CPF: \n");
  scanf("%s", cpf);
  printf("Digite seu Sexo: \n");
  scanf("%s", sexo);

  cadastrocliente(nome, data, cpf, sexo);
  return 0;
  }
