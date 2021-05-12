#include <stdio.h>
int funcsub(int a, int b, int c){
  int res;
  res = a - b - c;
  printf("%d", res);
  return 0;
}

int main(void) {
  int a, b, c, res;
  printf("Digite o primeiro número\n");
  scanf("%d", &a);
  printf("Digite o segundo número\n");
  scanf("%d", &b);
  printf("Digite o terceiro número\n");
  scanf("%d", &c);
  res = funcsub(a,b,c);

  return 0;
}