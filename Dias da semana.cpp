#include <stdio.h>

int main(void){
    char caractere;
    printf("Digite um caractere entre [1, 2, 3, 4, 5, 6, 7]: ");
    scanf("%c", &caractere);
    
    switch (caractere){
    case '1': printf("Domingo \n"); break;
    case '2': printf("Segunda-Feira \n"); break;
    case '3': printf("Terca-Feira \n"); break;
    case '4': printf("Quarta-Feira \n"); break;
    case '5': printf("Quinta-Feira \n"); break;
    case '6': printf("Sexta-Feira \n"); break;
    case '7': printf("Sabado \n"); break;
    default : printf("Nao e dia da semana \n"); break;
}
return(0);
}