#include <stdio.h>
int fatorial(int a){
if(a < 0){
  printf("Erro, por favor digite um número maior que 0");
}
else{
int fat;
  for(fat = 1; a > 1; a = a - 1){
  fat = fat * a;
  }
printf("O fatorial calculado foi: %d", fat);
  }
  return 0;
}

int main()
{
int fat, a;
printf("Digite um número e obtenha seu fatorial: ");
scanf("%d", &a);

fat = fatorial(a);
return 0;
}