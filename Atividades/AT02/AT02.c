#include <stdio.h>
int fsoma(int a, int b){
    int result;
    result = a + b;
    printf("%d", result);
    return 0;
}
int fsub(int a, int b){
    int result;
    result = a - b;
    printf("%d", result);
    return 0;
}
int fmult(int a, int b){
    int result;
    result = a * b;
    printf("%d", result);
    return 0;
}
float fdiv(int a, int b){
    float result;
    result = a / b;
    printf("%.2f", result);
    return 0;
}

int main(void) {
    int a, b, set = 1;
    double result;

    while(set !=0){
        printf("Digite o primeiro numero\n");
        scanf("%d", &a);
        printf("Digite o segundo numero\n");
        scanf("%d", &b);

        printf("Escolha uma opção\n0 - Sair\n1 - Somar\n2 - Subtrair\n3 -  Multiplicar\n4 - Dividir\n");
        scanf("%d", &set);
        switch(set){
            case 0:{
                printf("Sair\n");
                break;
            }
            case 1:{
                fsoma(a,b);
                break;
            }
            case 2:{
                fsub(a,b);
                break;
            }
            case 3:{
                fmult(a,b);
                break;
            }
            case 4:{
                fdiv(a,b);
                break;
            }
            default:{
              printf("Opção Inválida");
            }

    }
    return 0;
    }
}
