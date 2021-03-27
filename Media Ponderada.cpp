#include <stdio.h>

int main(void){
float num1, num2, media;

// Notas

printf("Digite a primeira nota:  ");
scanf("%f", &num1);

printf("Digite a segunda nota:  ");
scanf("%f", &num2);

// Calculo
media= num1*0.3 + num2*0.7;

printf("Media Ponderada: ");
printf("%f", media);

    return 0;
}