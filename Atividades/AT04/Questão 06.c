#include <stdio.h>
char retornaletra(char *v){
  printf("As suas letras são:\n");
  printf("%s\n", v);
    return 0;
}

int main(void) {
  char v[2];
  printf("Digite três letras:\n");
  scanf("%s", v);
  retornaletra(v);
  return 0;
}