#define tcpf 11
int vnome(char *name){
  int i;
  while(name[i] != '\0'){
    i++;
  }
  if(i < LG){
    printf("Nome válido\n");
  }
  else{
    printf("Erro, o nome excede o número permitido de caracteres\n");
  }
 return 0;
}

int vsexo(char *sex){
  char mas[tsex] = "M";
  char fem[tsex] = "F";
  char out[tsex] = "O";

  if(sex[0] == mas[0] || sex[0] == fem[0] || sex[0] == out[0]){
     printf("Opção de sexo válida\n");
  }
  else{
    printf("Opção de sexo inválida\n");
  }
  return 0;  
}

int cadastrocliente(char *name, char *date, char *cpf, char *sex){
  vnome(name);
  vsexo(sex);
  return 0;
}
  
int main(void) {
  char nome[LG], data[LG], cpf[tcpf], sexo[tsex];
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