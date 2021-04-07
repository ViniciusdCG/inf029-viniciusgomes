#define TAM 20
#define HAM 12

typedef struct{
  int dia;
  int mes;
  int ano;
} date;

typedef struct{
  char nome[TAM];
  char mat[HAM];
  char sex;
  char cpf[HAM];
  date nascimento;
} pessoa;

typedef struct{
  char nome[TAM];
  char cod[HAM];
  char semes[HAM];
  pessoa professor;
} disciplina;

date nascimento;
pessoa alunos[TAM];
pessoa professor[TAM];
disciplina subject[TAM];


void menu1(){
  printf("\nProjeto Escola\n");
  printf("Selecione uma opção:\n0 - Sair\n1 - Cadastrar\n2 - Listar\n");
}
void menu2(){
  printf("Selecione uma opção:\n0 - Sair\n1 - Aluno\n2 - Professor\n3 - Disciplina\n");
}
void menu3(){
  printf("Selecione uma opção:\n0 - Sair\n1 - Aluno\n2 - Professor\n3 - Disciplina\n ");
}
int ValidaData(int dia, int mes, int ano){
  int validade;

	if (mes > 12 || mes < 1 || dia < 1 || dia > 31){
		validade = 0;
	}
	else if ((dia < 1 && dia > 31) && (mes == 1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12)) {
		validade = 0;
	}
	else if ((dia < 1 && dia > 30) && (mes == 4|| mes == 6 || mes == 9 || mes == 11)){
      validade = 0;
    	}
	else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
		if (mes == 2 && dia > 29) {
			validade = 0;
		}
	}
	else if (mes == 2 && dia > 28) {
		validade = 0;
	}
	return validade;
}

int cadAluno(pessoa alunos[], int numAlunos){
  printf("Matricula:\n");
  scanf("%s", alunos[numAlunos].mat);
  getchar();
  if(alunos[numAlunos].mat <= 0){
    return 1;
  }
  printf("Nome:\n");
  fgets(alunos[numAlunos].nome, 100, stdin);
  size_t ln = strlen(alunos[numAlunos].nome) -1;
  if(alunos[numAlunos].nome[ln] == '\n'){
     alunos[numAlunos].nome[ln] = '\0';
    }
  printf("Sexo:\n");
  scanf("%c", &alunos[numAlunos].sex);
  alunos[numAlunos].sex = toupper(alunos[numAlunos].sex);
  if(alunos[numAlunos].sex != 'M' & alunos[numAlunos].sex != 'F' & alunos[numAlunos].sex != 'O'){
    return 0;
  }
  printf("Data de nascimento\n ");
  printf("Dia:\n");
  scanf("%d", &alunos[numAlunos].nascimento.dia);
  printf("Mes:\n");
  scanf("%d", &alunos[numAlunos].nascimento.mes);
  printf("Ano:\n");
  scanf("%d", &alunos[numAlunos].nascimento.ano);
  getchar();

if(ValidaData(alunos[numAlunos].nascimento.dia, alunos[numAlunos].nascimento.mes, alunos[numAlunos].nascimento.ano) == 0){
  printf("Digite o CPF:\n");
  fgets(alunos[numAlunos].cpf, 12, stdin); 
  ln = strlen(alunos[numAlunos].cpf) - 1; 
  if (alunos[numAlunos].cpf[ln] == '\n'){
    alunos[numAlunos].cpf[ln] = '\0';
    }
    else {
            printf("Data de nasicmento invalida");
    }
    printf("Cadastro Realizado");
}
return 1;
}

int cadProfessor(pessoa professor[], int numProfessor){
  printf("Matricula:\n");
  scanf("%s", professor[numProfessor].mat);
  getchar();
  if(professor[numProfessor].mat <= 0){
    return 1;
  }
  printf("Nome:\n");
  fgets(professor[numProfessor].nome, 100, stdin);
  size_t ln = strlen(professor[numProfessor].nome) -1;
  if(professor[numProfessor].nome[ln] == '\n'){
     professor[numProfessor].nome[ln] = '\0';
    }
  printf("Sexo:\n");
  scanf("%c", &professor[numProfessor].sex);
  professor[numProfessor].sex = toupper(professor[numProfessor].sex);
  if(professor[numProfessor].sex != 'M' & professor[numProfessor].sex != 'F' & professor[numProfessor].sex != 'O'){
    return 0;
  }
  printf("Data de nascimento\n ");
  printf("Dia:\n");
  scanf("%d", &professor[numProfessor].nascimento.dia);
  printf("Mes:\n");
  scanf("%d", &professor[numProfessor].nascimento.mes);
  printf("Ano:\n");
  scanf("%d", &professor[numProfessor].nascimento.ano);
  getchar();

if(ValidaData(professor[numProfessor].nascimento.dia, professor[numProfessor].nascimento.mes, professor[numProfessor].nascimento.ano) == 0){
  printf("Digite o CPF:\n");
  fgets(professor[numProfessor].cpf, 12, stdin); 
  ln = strlen(professor[numProfessor].cpf) - 1; 
  if (professor[numProfessor].cpf[ln] == '\n'){
    professor[numProfessor].cpf[ln] = '\0';
    }
    else {
      printf("\nData de nasicmento invalida\n");
    }
    printf("\nCadastro Realizado\n");
}
return 1;
}
int cadDisc(disciplina subject[], int numDisc){

    printf("Nome: \n");
    scanf("%s", subject[numDisc].nome);
    fflush(stdin);

    printf("Codigo: \n");
    scanf("%s", subject[numDisc].cod);
    fflush(stdin);

    printf("Semestre: \n");
    scanf("%s",subject[numDisc].semes);
    fflush(stdin);

    printf("Professor: \n");
    scanf("%s",subject[numDisc].professor.nome);
    fflush(stdin);
    return 1;
}

void listAlunos(pessoa alunos[], int k){
  int i;
  for (i=0;i<k;i++){
  printf("\nMatricula: %s\n", alunos[i].mat);
  printf("Nome: %s\n", alunos[i].nome);
  printf("Sexo: %c\n", alunos[i].sex);
  printf("Data de nascimento: %d/%d/%d\n\n", alunos[i].nascimento.dia, alunos[i],nascimento.mes, alunos[i].nascimento.ano);
  }
}

void listProf(pessoa professor[], int k){
  int i;
  for (i=0;i<k;i++){
  printf("\nMatricula: %s\n", professor[i].mat);
  printf("Nome: %s\n", professor[i].nome);
  printf("Sexo: %c\n", professor[i].sex);
  printf("Data de nascimento: %d/%d/%d\n\n", professor[i].nascimento.dia, professor[i],nascimento.mes, professor[i].nascimento.ano);
  }
}

void listDis(disciplina subject[], int k){
  int i;
  for (i=0;i<k;i++){
  printf("\nNome: %s\n", subject[i].nome);
  printf("Codigo: %s\n", subject[i].cod);
  printf("Semestre: %s\n", subject[i].semes);
  printf("Professor: %s\n\n", subject[i].professor.nome);
  }
}