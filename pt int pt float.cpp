#include <stdio.h>

int main(){
    double numero;
    int inteiro;
    double fracionario;

//Numero Real
    
    printf("Digite um numero real: ");
    scanf("%lf", &numero);

//Parte Inteira
    
    inteiro = numero;
    printf("Parte Inteira: %d\n", inteiro);

//Parte Fracionaria        
    
    fracionario = numero - inteiro;
    printf("Parte Fracionaria: %lf \n", fracionario);

return 0;
}