#include <stdio.h>
int retornanum(int *v){
  int i;
  printf("O seus números são:\n");
    for (i = 0; i < 3; i++){
    printf("%d\n", v[i]);
    }
    return 0;
}
  
int main(void) {
  int v[3];
  int i;
  for (i = 0; i < 3; i++){
    printf("Digite um numero:\n");
    scanf("%d", &v[i]);
  }
  retornanum(v);
  return 0;
}