#include <stdio.h>

int main (void){
    int x, y;
    char operador;
    
    printf("Digite um operador entre [+, -, *, /, %%]: ");
    scanf("%c", &operador);
    
    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Digite outro numero: ");
    scanf("%d", &y);

    
    //printf("%c", operador);

    switch (operador){
        case '+': printf("Adicao: %d \n",x + y); break;
        case '-': printf("Subtracao: %d \n", x - y); break;
        case '*': printf("Multiplicacao: %d \n", x * y); break;
        case '/': printf("Divisao: %d \n", x / y); break;
        case '%': printf("Resto da divisao: %d \n", x % y); break;
        default : printf("\n Nao existe um operador deste tipo"); break;
    }

return(0);
}