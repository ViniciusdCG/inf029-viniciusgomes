#include <stdio.h>
typedef struct numeros
{
    int a, b ,c , d;
}NUMEROS;
 
void Exibe(NUMEROS var)
{
    printf("Seus números são:\n");
    printf("%d\n", var.a);
    printf("%d\n", var.b);
    printf("%d\n", var.c);
    printf("%d\n", var.d);
}
 
int main(void)
{
    NUMEROS exp;
    printf("Digite quatro números: \n");
    scanf("%d", &exp.a);
    scanf("%d", &exp.b);
    scanf("%d", &exp.c);
    scanf("%d", &exp.d);
    Exibe(exp);
 
    return 0;
}