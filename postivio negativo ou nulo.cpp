#include <stdio.h>

int main(void){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0){
    printf("O numero e positivo");
    }

    if(num == 0){
        printf("O numero e nulo");
        }    else if (num < 0){
            printf("O numero e negativo");
        }
    
return(0);    
}