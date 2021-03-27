#include <stdio.h>
int main(void){
    float notax, notay, media;

//Notas
    printf("Escreva a primeira nota: ");
    scanf("%f", &notax);

    printf("Escreva a segunda nota: ");
    scanf("%f", &notay);

//Calculo
media= (notax + notay) /2; 
 printf("Media: ");
 printf("%.1f", media);

//Aprovado e Reprovado
if(media >= 6){
    printf("\nAprovado");
}else{
  printf("\nReprovado");
   }

return(0);
}