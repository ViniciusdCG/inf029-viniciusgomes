#include <stdio.h>
int funcsoma(int a, int b){
  int res;
  res = a + b;
  printf("%d", res);
  return 0;
}

int main(void) {
  int a, b, res;
  printf("Digite o primeiro número\n");
  scanf("%d", &a);
  printf("Digite o segundo número\n");
  scanf("%d", &b);
  res = funcsoma(a,b);

  return 0;
}