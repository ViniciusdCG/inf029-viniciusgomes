#include <stdio.h>
char retornapalavra(char *v, char *p, char *d){
  printf("As suas palavras são:\n");
  printf("%s\n", v);
  printf("%s\n", p);
  printf("%s\n", d);
  return 0;
}

int main(void) {
  char v[20];
  char p[20];
  char d[20];
  printf("Digite a primeira palavra:\n");
  scanf("%s", v);
  printf("Digite a segunda palavra:\n");
  scanf("%s", p);
  printf("Digite a terceira palavra:\n");
  scanf("%s", d);
  retornapalavra(v,p,d);
  return 0;
}